#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EventOccurrenceConditionData.h"
#include "HasEventHappenedEnoughTimesEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UHasEventHappenedEnoughTimesEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventOccurrenceConditionData _conditionEventsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _numOccurrences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _prerequisiteTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _triggerTimeLimit;

public:
	UHasEventHappenedEnoughTimesEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventHappenedEnoughTimesEvaluatorCondition) { return 0; }
