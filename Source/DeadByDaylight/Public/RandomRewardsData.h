#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "RandomRewardsData.generated.h"

USTRUCT(BlueprintType)
struct FRandomRewardsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RewardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FRandomRewardsData();
};

FORCEINLINE uint32 GetTypeHash(const FRandomRewardsData) { return 0; }
