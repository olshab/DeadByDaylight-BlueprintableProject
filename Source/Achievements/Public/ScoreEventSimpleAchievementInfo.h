#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "ScoreEventSimpleAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct FScoreEventSimpleAchievementInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDBDScoreTypes> scoreTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> profileStats;

public:
	ACHIEVEMENTS_API FScoreEventSimpleAchievementInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScoreEventSimpleAchievementInfo) { return 0; }
