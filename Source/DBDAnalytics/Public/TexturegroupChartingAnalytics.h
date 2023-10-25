#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "TexturegroupChartingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FTexturegroupChartingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString texturegroup_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString texturegroups_guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString map_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 avg_qty_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 max_qty_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 avg_memory_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 max_memory_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 avg_qty_non_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 max_qty_non_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 avg_memory_non_streaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 max_memory_non_streaming;

public:
	DBDANALYTICS_API FTexturegroupChartingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTexturegroupChartingAnalytics) { return 0; }
