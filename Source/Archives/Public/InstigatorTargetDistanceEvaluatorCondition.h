#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EInstigatorTargetDistanceComparator.h"
#include "InstigatorTargetDistanceEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UInstigatorTargetDistanceEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInstigatorTargetDistanceComparator _comparator;

public:
	UInstigatorTargetDistanceEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UInstigatorTargetDistanceEvaluatorCondition) { return 0; }
