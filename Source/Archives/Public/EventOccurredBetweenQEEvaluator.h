#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventOccurredBetweenQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _middleEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool outerEventsDifferentTargets;

public:
	UEventOccurredBetweenQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventOccurredBetweenQEEvaluator) { return 0; }
