#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "ActivePhaseWalkInteraction.generated.h"

class UCurveFloat;
class ADBDPlayer;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _fullyChargedSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _accelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _phaseWalkPenaltyThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _phaseWalkPenaltyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _activePhaseWalkChargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAnimMontage* _activePhaseWalkChargingMontage;

private:
	UFUNCTION(BlueprintCallable)
	void OnPowerCollected(ADBDPlayer* collector);

	UFUNCTION(BlueprintCallable)
	void OnPlayerLocallyObservedChanged(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	float GetChargeTime() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ResetChargeVFX(ADBDPlayer* player);

public:
	UActivePhaseWalkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UActivePhaseWalkInteraction) { return 0; }
