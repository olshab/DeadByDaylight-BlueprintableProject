#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "EEventCountComparisonOperator.h"
#include "GameplayTagContainer.h"
#include "EEventSubject.h"
#include "EventCountComparisonQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _incrementCountEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEventSubject _incrementIfIAm;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _resetCountEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEventSubject _resetIfIAm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEventCountComparisonOperator _comparisonOperator;

public:
	UEventCountComparisonQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventCountComparisonQEEvaluator) { return 0; }
