#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "ScoreEventRewards.generated.h"

USTRUCT(BlueprintType)
struct FScoreEventRewards
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FScoreEventRewards();
};

FORCEINLINE uint32 GetTypeHash(const FScoreEventRewards) { return 0; }
