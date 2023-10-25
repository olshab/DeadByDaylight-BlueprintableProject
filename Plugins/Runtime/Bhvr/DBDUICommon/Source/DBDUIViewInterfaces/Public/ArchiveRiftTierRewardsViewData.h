#pragma once

#include "CoreMinimal.h"
#include "ETierType.h"
#include "RewardWrapperViewData.h"
#include "ArchiveRiftTierRewardsViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveRiftTierRewardsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Tier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETierType TierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TierProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPremiumUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCurrentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> FreeRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> PremiumRewards;

public:
	DBDUIVIEWINTERFACES_API FArchiveRiftTierRewardsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveRiftTierRewardsViewData) { return 0; }
