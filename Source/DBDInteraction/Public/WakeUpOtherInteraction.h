#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "WakeUpOtherInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWakeUpOtherInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _wakeUpTimeCurve;

public:
	UWakeUpOtherInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UWakeUpOtherInteraction) { return 0; }
