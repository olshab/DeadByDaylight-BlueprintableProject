#pragma once

#include "CoreMinimal.h"
#include "ArchivesObjective.h"
#include "ArchivesNodeCoordinates.h"
#include "RewardResponseItem.h"
#include "ArchivesNodeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchivesNodeDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClientInfoId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchivesNodeCoordinates Coordinates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Neighbors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NodeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FArchivesObjective> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Objectives_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Journal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Journal_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardResponseItem> Reward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Reward_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesNodeDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesNodeDefinition) { return 0; }
