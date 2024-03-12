#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "IncrementOnModifierAddedEvaluator.generated.h"

UCLASS(Blueprintable)
class UIncrementOnModifierAddedEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _trackedModifierFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _incrementOnFlagAddedOnKiller;

public:
	UIncrementOnModifierAddedEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIncrementOnModifierAddedEvaluator) { return 0; }
