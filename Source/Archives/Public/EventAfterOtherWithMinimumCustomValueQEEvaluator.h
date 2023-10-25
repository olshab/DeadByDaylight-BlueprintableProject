#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventAfterOtherWithMinimumCustomValueQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UEventAfterOtherWithMinimumCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _startEvent;

public:
	UEventAfterOtherWithMinimumCustomValueQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventAfterOtherWithMinimumCustomValueQEEvaluator) { return 0; }
