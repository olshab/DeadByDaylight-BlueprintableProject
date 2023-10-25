#pragma once

#include "CoreMinimal.h"
#include "CoreRanksConfiguration.h"
#include "CoreRankWidgetConfiguration.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCoreRankWidgetConfiguration
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FCoreRanksConfiguration> SurvivorRanks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FCoreRanksConfiguration> KillerRanks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UTexture2D*> RankNumberImages;

public:
	DBDUIVIEWSCORE_API FCoreRankWidgetConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRankWidgetConfiguration) { return 0; }
