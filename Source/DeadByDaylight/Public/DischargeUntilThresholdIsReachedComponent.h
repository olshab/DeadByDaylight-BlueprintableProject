#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "DischargeUntilThresholdIsReachedComponent.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDischargeUntilThresholdIsReachedComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargeableComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnChargePercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UDischargeUntilThresholdIsReachedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDischargeUntilThresholdIsReachedComponent) { return 0; }
