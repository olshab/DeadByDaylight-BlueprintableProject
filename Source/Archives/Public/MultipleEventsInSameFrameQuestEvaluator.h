#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MultipleEventsInSameFrameQuestEvaluator.generated.h"

UCLASS(Blueprintable)
class UMultipleEventsInSameFrameQuestEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UMultipleEventsInSameFrameQuestEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleEventsInSameFrameQuestEvaluator) { return 0; }
