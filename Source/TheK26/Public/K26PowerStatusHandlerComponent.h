#pragma once

#include "CoreMinimal.h"
#include "K26SurvivorStatus.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K26PowerStatusHandlerComponent.generated.h"

class ACamperPlayer;
class UInteractionDefinition;
class AActor;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26PowerStatusHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UInteractionDefinition>> _interactionsDuringWhichTheCrowIsIgnored;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _invincibilityTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerInstinctDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerInstinctGracePeriod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _statusIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _k26KillerInstinctStatusEffectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<FK26SurvivorStatus> _survivorStatusList;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnStopRemovingCrow(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnStartRemovingCrow(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnIdleCrowInterrupt(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCrowDetached(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCrowAttached(ACamperPlayer* survivor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCrowIdleInterrupt(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCrowDamagedSurvivor(ASlasherPlayer* killer, ACamperPlayer* survivor);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorAdded(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnKillerInstinctTimePassed(const ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26PowerStatusHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26PowerStatusHandlerComponent) { return 0; }
