#pragma once

#include "CoreMinimal.h"
#include "RankThresholdsData.generated.h"

USTRUCT(BlueprintType)
struct FRankThresholdsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> PipsRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> ResetStartingPips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool ResetStartingPips_IsSet;

public:
	S3COMMAND_API FRankThresholdsData();
};

FORCEINLINE uint32 GetTypeHash(const FRankThresholdsData) { return 0; }
