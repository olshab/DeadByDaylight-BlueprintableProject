#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ThrowInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UThrowInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _throwCancelledSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _throwCancellationExitTime;

protected:
	UFUNCTION(BlueprintCallable)
	void InitThrowCancellationExitTime(float value);

	UFUNCTION(BlueprintPure)
	bool HasCancelledThrow() const;

public:
	UThrowInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UThrowInteraction) { return 0; }
