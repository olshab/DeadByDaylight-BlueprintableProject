#pragma once

#include "CoreMinimal.h"
#include "RankGroupData.h"
#include "RankGroups.generated.h"

USTRUCT(BlueprintType)
struct FRankGroups
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRankGroupData> KillerRankGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRankGroupData> SurvivorRankGroup;

public:
	S3COMMAND_API FRankGroups();
};

FORCEINLINE uint32 GetTypeHash(const FRankGroups) { return 0; }
