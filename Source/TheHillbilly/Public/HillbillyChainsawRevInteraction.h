#pragma once

#include "CoreMinimal.h"
#include "ChainsawRevInteraction.h"
#include "HillbillyChainsawRevInteraction.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyChainsawRevInteraction : public UChainsawRevInteraction
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnChargeablePercentChange(UChargeableComponent* chargeableComponent, float totalPercentComplete);

public:
	UHillbillyChainsawRevInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawRevInteraction) { return 0; }
