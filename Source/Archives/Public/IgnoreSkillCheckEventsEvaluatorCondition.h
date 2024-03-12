#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "IgnoreSkillCheckEventsEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UIgnoreSkillCheckEventsEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UIgnoreSkillCheckEventsEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIgnoreSkillCheckEventsEvaluatorCondition) { return 0; }
