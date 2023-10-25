#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Engine/EngineTypes.h"
#include "EStaticFieldMovementSpeed.h"
#include "DBDTunableRowHandle.h"
#include "IridescentQueenEffect.generated.h"

class UCapsuleComponent;
class ACamperPlayer;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIridescentQueenEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _authority_iridescentQueenDischargeDetectionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dischargeDetectionZoneHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dischargeDetectionZoneRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _madnessToAddOnDischarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChargeActive, meta=(AllowPrivateAccess=true))
	bool _chargeActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _charged;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ChargeActive();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DischargeOnSurvivor(ACamperPlayer* survivor);

protected:
	UFUNCTION(BlueprintPure)
	EStaticFieldMovementSpeed GetStaticFieldMovementSpeed() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateStaticFieldFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SpawnStaticFieldFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeZoneDeactivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeZoneActivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDischargeOnSurvivor(ADBDPlayer* survivorToShock);

private:
	UFUNCTION()
	void Authority_OnSurvivorOverlappedDischargeZone(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIridescentQueenEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentQueenEffect) { return 0; }
