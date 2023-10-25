#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniDashInteraction.generated.h"

class UCurveFloat;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniDashInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _dashingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _yawAdjustTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _cooldownSpeedCurve;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerOwner(const ADBDPlayer* player);

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDashEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDashBegin(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargeEnd(ADBDPlayer* player, const bool chargeCompleted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargeBegin(ADBDPlayer* player);

public:
	UOniDashInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOniDashInteraction) { return 0; }
