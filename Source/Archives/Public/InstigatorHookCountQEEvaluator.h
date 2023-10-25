#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InstigatorHookCountQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UInstigatorHookCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInstigatorHookCountQEEvaluator) { return 0; }
