#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "IncrementOnModifierFlagAddedEvaluator.generated.h"

UCLASS(Blueprintable)
class UIncrementOnModifierFlagAddedEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _trackedStateTags;

public:
	UIncrementOnModifierFlagAddedEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIncrementOnModifierFlagAddedEvaluator) { return 0; }
