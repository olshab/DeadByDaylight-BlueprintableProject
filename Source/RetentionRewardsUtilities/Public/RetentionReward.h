#pragma once

#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RetentionReward.generated.h"

USTRUCT(BlueprintType)
struct FRetentionReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ItemId;

	UPROPERTY(EditAnywhere, Transient)
	uint32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardItemType RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<FName, FString> GameSpecificData;

public:
	RETENTIONREWARDSUTILITIES_API FRetentionReward();
};

FORCEINLINE uint32 GetTypeHash(const FRetentionReward) { return 0; }
