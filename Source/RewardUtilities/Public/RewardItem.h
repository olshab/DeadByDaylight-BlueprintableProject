#pragma once

#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RewardItem.generated.h"

USTRUCT(BlueprintType)
struct FRewardItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardItemType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

public:
	REWARDUTILITIES_API FRewardItem();
};

FORCEINLINE uint32 GetTypeHash(const FRewardItem) { return 0; }
