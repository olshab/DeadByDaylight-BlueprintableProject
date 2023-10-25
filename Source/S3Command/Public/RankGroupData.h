#pragma once

#include "CoreMinimal.h"
#include "RankGroupData.generated.h"

USTRUCT(BlueprintType)
struct FRankGroupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<double> EmblemThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RankThreshold;

public:
	S3COMMAND_API FRankGroupData();
};

FORCEINLINE uint32 GetTypeHash(const FRankGroupData) { return 0; }
