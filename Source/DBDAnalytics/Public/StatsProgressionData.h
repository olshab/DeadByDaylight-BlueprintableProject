#pragma once

#include "CoreMinimal.h"
#include "StatsProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FStatsProgressionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

public:
	DBDANALYTICS_API FStatsProgressionData();
};

FORCEINLINE uint32 GetTypeHash(const FStatsProgressionData) { return 0; }
