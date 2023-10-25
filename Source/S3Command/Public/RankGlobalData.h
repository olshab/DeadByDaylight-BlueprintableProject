#pragma once

#include "CoreMinimal.h"
#include "RankResetDateData.h"
#include "RankGlobalData.generated.h"

USTRUCT(BlueprintType)
struct FRankGlobalData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoPipLossRankThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoRankLossThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BaseTrialPips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRankResetDateData> RankResetDates;

public:
	S3COMMAND_API FRankGlobalData();
};

FORCEINLINE uint32 GetTypeHash(const FRankGlobalData) { return 0; }
