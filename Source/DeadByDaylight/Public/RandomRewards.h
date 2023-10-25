#pragma once

#include "CoreMinimal.h"
#include "RandomRewardsData.h"
#include "RandomRewards.generated.h"

USTRUCT(BlueprintType)
struct FRandomRewards
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRandomRewardsData> RandomRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool RandomRewards_IsSet;

public:
	DEADBYDAYLIGHT_API FRandomRewards();
};

FORCEINLINE uint32 GetTypeHash(const FRandomRewards) { return 0; }
