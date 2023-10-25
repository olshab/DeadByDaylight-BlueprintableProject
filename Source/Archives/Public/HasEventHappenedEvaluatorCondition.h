#pragma once

#include "CoreMinimal.h"
#include "BaseRecentEventEvaluatorCondition.h"
#include "HasEventHappenedEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UHasEventHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
{
	GENERATED_BODY()

public:
	UHasEventHappenedEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventHappenedEvaluatorCondition) { return 0; }
