#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "MultipleEventsBeforeResetEventQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UMultipleEventsBeforeResetEventQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _gameEventsResettingProgress;

public:
	UMultipleEventsBeforeResetEventQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleEventsBeforeResetEventQEEvaluator) { return 0; }
