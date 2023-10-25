#pragma once

#include "CoreMinimal.h"
#include "EPrestigeRewardType.h"
#include "PrestigeRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeRewardStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RewardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPrestigeRewardType RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RewardPerkLevel;

public:
	DEADBYDAYLIGHT_API FPrestigeRewardStruct();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardStruct) { return 0; }
