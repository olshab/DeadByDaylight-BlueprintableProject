#pragma once

#include "CoreMinimal.h"
#include "RankThresholdsData.h"
#include "RankGroups.h"
#include "RankGlobalData.h"
#include "RankDefinitionData.generated.h"

USTRUCT(BlueprintType)
struct FRankDefinitionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRankThresholdsData RankThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRankGroups RankGroupDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRankGlobalData GlobalData;

public:
	S3COMMAND_API FRankDefinitionData();
};

FORCEINLINE uint32 GetTypeHash(const FRankDefinitionData) { return 0; }
