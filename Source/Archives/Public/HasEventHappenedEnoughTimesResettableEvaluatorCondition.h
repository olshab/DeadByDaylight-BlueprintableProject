#pragma once

#include "CoreMinimal.h"
#include "HasEventHappenedEnoughTimesEvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasEventHappenedEnoughTimesResettableEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UHasEventHappenedEnoughTimesResettableEvaluatorCondition : public UHasEventHappenedEnoughTimesEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _resetProgressGameEvents;

public:
	UHasEventHappenedEnoughTimesResettableEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventHappenedEnoughTimesResettableEvaluatorCondition) { return 0; }
