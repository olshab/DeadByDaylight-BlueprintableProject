#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartAggregatorSettings.h"
#include "SimplygonStandinPipeline.generated.h"

UCLASS(Blueprintable, Abstract, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonStandinPipeline : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChartAggregatorSettings ChartAggregatorSettings;

public:
	USimplygonStandinPipeline();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonStandinPipeline) { return 0; }
