#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialBehaviourIterativeWeightAdjustmentStrategy.generated.h"

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API USpecialBehaviourIterativeWeightAdjustmentStrategy : public UObject
{
	GENERATED_BODY()

public:
	USpecialBehaviourIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USpecialBehaviourIterativeWeightAdjustmentStrategy) { return 0; }
