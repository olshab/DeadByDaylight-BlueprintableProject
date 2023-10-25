#pragma once

#include "CoreMinimal.h"
#include "AIGoalWeight.h"
#include "AIGoalWeightContainer.generated.h"

USTRUCT(BlueprintType)
struct FAIGoalWeightContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAIGoalWeight> WeightedGoals;

public:
	DBDBOTS_API FAIGoalWeightContainer();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoalWeightContainer) { return 0; }
