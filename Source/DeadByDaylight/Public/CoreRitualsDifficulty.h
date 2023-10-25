#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "CoreRitualsDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FCoreRitualsDifficulty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DisplayThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FCoreRitualsDifficulty();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsDifficulty) { return 0; }
