#pragma once

#include "CoreMinimal.h"
#include "EMilestoneTrackerItemState.h"
#include "CustomizationRewardViewData.h"
#include "MilestoneTrackerItemViewData.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneTrackerItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EventPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMilestoneTrackerItemState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationRewardViewData RewardData;

public:
	DBDUIVIEWINTERFACES_API FMilestoneTrackerItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMilestoneTrackerItemViewData) { return 0; }
