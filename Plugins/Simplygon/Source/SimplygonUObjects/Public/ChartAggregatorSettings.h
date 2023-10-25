#pragma once

#include "CoreMinimal.h"
#include "EChartAggregatorMode.h"
#include "ESurfaceAreaScale.h"
#include "ChartAggregatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FChartAggregatorSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChartAggregatorMode ChartAggregatorMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurfaceAreaScale SurfaceAreaScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OriginalTexCoordLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OriginalTexCoordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SeparateOverlappingCharts : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OriginalChartProportionsChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 LockUVRotation : 1;

public:
	SIMPLYGONUOBJECTS_API FChartAggregatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FChartAggregatorSettings) { return 0; }
