#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "SpecialEventMilestoneRewards.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventMilestoneRewards
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PointsCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FSpecialEventMilestoneRewards();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventMilestoneRewards) { return 0; }
