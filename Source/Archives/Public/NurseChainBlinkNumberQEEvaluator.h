#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "NurseChainBlinkNumberQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UNurseChainBlinkNumberQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UNurseChainBlinkNumberQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UNurseChainBlinkNumberQEEvaluator) { return 0; }
