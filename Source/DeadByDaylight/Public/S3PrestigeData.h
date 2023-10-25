#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeConfig.h"
#include "S3PrestigeCharacterRewards.h"
#include "S3PrestigeData.generated.h"

USTRUCT(BlueprintType)
struct FS3PrestigeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3PrestigeConfig Config;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FS3PrestigeCharacterRewards> RewardsByCharacters;

public:
	DEADBYDAYLIGHT_API FS3PrestigeData();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeData) { return 0; }
