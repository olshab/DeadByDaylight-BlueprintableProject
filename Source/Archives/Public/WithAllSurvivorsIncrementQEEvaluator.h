#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "WithAllSurvivorsIncrementQEEvaluator.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable)
class UWithAllSurvivorsIncrementQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ACamperPlayer>> _targetList;

public:
	UWithAllSurvivorsIncrementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UWithAllSurvivorsIncrementQEEvaluator) { return 0; }
