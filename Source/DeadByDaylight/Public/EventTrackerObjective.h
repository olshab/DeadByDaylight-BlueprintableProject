#pragma once

#include "CoreMinimal.h"
#include "EventTrackerQuestEventCondition.h"
#include "EventTrackerObjectiveMilestone.h"
#include "EventTrackerObjective.generated.h"

USTRUCT(BlueprintType)
struct FEventTrackerObjective
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxProgressionPerMatchPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QuestEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString QuestEventParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventTrackerQuestEventCondition> QuestEventConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool QuestEventConditions_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventTrackerObjectiveMilestone> Milestones;

public:
	DEADBYDAYLIGHT_API FEventTrackerObjective();
};

FORCEINLINE uint32 GetTypeHash(const FEventTrackerObjective) { return 0; }
