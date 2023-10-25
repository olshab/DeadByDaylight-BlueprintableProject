#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "SurvivorDownedFromHealthyQEEvaluator.generated.h"

UCLASS(Blueprintable)
class USurvivorDownedFromHealthyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	USurvivorDownedFromHealthyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorDownedFromHealthyQEEvaluator) { return 0; }
