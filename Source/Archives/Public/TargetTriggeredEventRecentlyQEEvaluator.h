#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetTriggeredEventRecentlyQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _gameEvent;

public:
	UTargetTriggeredEventRecentlyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetTriggeredEventRecentlyQEEvaluator) { return 0; }
