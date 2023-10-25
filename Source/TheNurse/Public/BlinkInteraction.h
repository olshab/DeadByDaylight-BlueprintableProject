#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "StatProperty.h"
#include "BlinkInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _chargeTime;

public:
	UBlinkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkInteraction) { return 0; }
