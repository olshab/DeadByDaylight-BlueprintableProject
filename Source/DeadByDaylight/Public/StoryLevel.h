#pragma once

#include "CoreMinimal.h"
#include "ArchivesNodeDefinition.h"
#include "RewardResponseItem.h"
#include "StoryLevel.generated.h"

USTRUCT(BlueprintType)
struct FStoryLevel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Start;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> End;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FArchivesNodeDefinition> Nodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> EndNodeRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool EndNodeRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> LevelRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool LevelRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> TaskRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool TaskRewards_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> ChallengeRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ChallengeRewards_IsSet;

public:
	DEADBYDAYLIGHT_API FStoryLevel();
};

FORCEINLINE uint32 GetTypeHash(const FStoryLevel) { return 0; }
