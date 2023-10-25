#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "SurvivorNearMeEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	USurvivorNearMeEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorNearMeEvaluatorCondition) { return 0; }
