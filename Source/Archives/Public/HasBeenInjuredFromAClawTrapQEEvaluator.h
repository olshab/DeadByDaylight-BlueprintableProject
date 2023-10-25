#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasBeenInjuredFromAClawTrapQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UHasBeenInjuredFromAClawTrapQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UHasBeenInjuredFromAClawTrapQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasBeenInjuredFromAClawTrapQEEvaluator) { return 0; }
