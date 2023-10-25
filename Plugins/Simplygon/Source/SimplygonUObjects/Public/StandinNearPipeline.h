#pragma once

#include "CoreMinimal.h"
#include "SimplygonStandinPipeline.h"
#include "AggregationPipelineSettings.h"
#include "StandinNearPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UStandinNearPipeline : public USimplygonStandinPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAggregationPipelineSettings Settings;

public:
	UStandinNearPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UStandinNearPipeline) { return 0; }
