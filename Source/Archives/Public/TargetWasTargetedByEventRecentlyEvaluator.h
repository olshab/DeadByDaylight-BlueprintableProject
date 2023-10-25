#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetWasTargetedByEventRecentlyEvaluator.generated.h"

UCLASS(Blueprintable)
class UTargetWasTargetedByEventRecentlyEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _gameEventsToTriggerFirst;

public:
	UTargetWasTargetedByEventRecentlyEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetWasTargetedByEventRecentlyEvaluator) { return 0; }
