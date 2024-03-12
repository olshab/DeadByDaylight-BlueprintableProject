#pragma once

#include "CoreMinimal.h"
#include "SpecialEventMiscRewards.h"
#include "EventTrackerObjective.h"
#include "LTEData.h"
#include "SpecialEventMilestoneRewards.h"
#include "EventPeriod.h"
#include "RewardResponseItem.h"
#include "ScoreEventRewards.h"
#include "SpecialEventsData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLTEData LteData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool LteData_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventMiscRewards> MiscRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool MiscRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> OwnerRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool OwnerRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FScoreEventRewards> ScoreEventRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ScoreEventRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventMilestoneRewards> MilestoneRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool MilestoneRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventPeriod> EventPeriods;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool EventPeriods_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventTrackerObjective> EventTrackerObjectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool EventTrackerObjectives_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventsData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventsData) { return 0; }
