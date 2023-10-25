#pragma once

#include "CoreMinimal.h"
#include "CustomAchievementInfo.h"
#include "ScoreEventSimpleAchievementInfo.h"
#include "Engine/DataAsset.h"
#include "GameEventClassAchievementInfo.h"
#include "GameEventSimpleAchievementInfo.h"
#include "AchievementsData.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UAchievementsData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameEventSimpleAchievementInfo> gameEventSimpleAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FScoreEventSimpleAchievementInfo> scoreEventSimpleAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameEventClassAchievementInfo> gameEventClassAchievements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomAchievementInfo> customEventClassAchievements;

public:
	UAchievementsData();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementsData) { return 0; }
