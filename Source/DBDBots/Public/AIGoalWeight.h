#pragma once

#include "CoreMinimal.h"
#include "AIGoal.h"
#include "AIGoalWeight.generated.h"

USTRUCT(BlueprintType)
struct FAIGoalWeight
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIGoal GoalInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WeightDebug;

public:
	DBDBOTS_API FAIGoalWeight();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoalWeight) { return 0; }
