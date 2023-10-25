#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "RewardTrackTierData.generated.h"

USTRUCT(BlueprintType)
struct FRewardTrackTierData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 TierId;

	UPROPERTY(EditAnywhere)
	uint32 TierGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Free;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Free_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Premium;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Premium_IsSet;

public:
	DEADBYDAYLIGHT_API FRewardTrackTierData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardTrackTierData) { return 0; }
