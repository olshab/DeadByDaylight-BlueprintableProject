#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeRewardItem.generated.h"

USTRUCT(BlueprintType)
struct FS3PrestigeRewardItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool PerkLevel_IsSet;

public:
	DEADBYDAYLIGHT_API FS3PrestigeRewardItem();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeRewardItem) { return 0; }
