#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "GuardFlag.generated.h"

class UStatusEffect;
class ADBDPlayer;
class UPrimitiveComponent;
class AKnightGuard;

UCLASS(Blueprintable)
class AGuardFlag : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPrimitiveComponent* _flagPickupHitbox;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	AKnightGuard* _owningGuard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HuntedSurvivor, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _huntedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _flagPickupEnduranceEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flagPickupEnduranceDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _flagPickupHasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flagPickupHasteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flagPickupHasteModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _clientHuntedSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_HuntedSurvivor();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCamperCapturedFlag(ADBDPlayer* huntedSurvivor);

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetHuntedSurvivor() const;

public:
	UFUNCTION(BlueprintPure)
	float GetFlagPickupHasteDuration() const;

	UFUNCTION(BlueprintPure)
	float GetFlagPickupEnduranceDuration() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetActivationTimeLeft() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorCapturedFlag(ADBDPlayer* previouslyHuntedSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagSpawned(float activationTimerDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagDisappearDueToHuntEnding(ADBDPlayer* previouslyHuntedSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagActivationTimerCompleted();

private:
	UFUNCTION()
	void Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hitResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGuardFlag();
};

FORCEINLINE uint32 GetTypeHash(const AGuardFlag) { return 0; }
