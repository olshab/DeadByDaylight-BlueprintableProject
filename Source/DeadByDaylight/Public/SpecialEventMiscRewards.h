#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "SpecialEventMiscRewards.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventMiscRewards
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FSpecialEventMiscRewards();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventMiscRewards) { return 0; }
