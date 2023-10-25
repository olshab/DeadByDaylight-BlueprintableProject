#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "IncrementOnStateTagAddedEvaluator.generated.h"

UCLASS(Blueprintable)
class UIncrementOnStateTagAddedEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _trackedStateTags;

public:
	UIncrementOnStateTagAddedEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIncrementOnStateTagAddedEvaluator) { return 0; }
