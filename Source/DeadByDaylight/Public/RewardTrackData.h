#pragma once

#include "CoreMinimal.h"
#include "RewardTrackTierData.h"
#include "RewardTrackData.generated.h"

USTRUCT(BlueprintType)
struct FRewardTrackData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardTrackTierData> TierInfo;

	UPROPERTY(EditAnywhere)
	uint32 Requirement;

public:
	DEADBYDAYLIGHT_API FRewardTrackData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardTrackData) { return 0; }
