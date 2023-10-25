#pragma once

#include "CoreMinimal.h"
#include "SimplygonStandinPipeline.h"
#include "RemeshingPipelineSettings.h"
#include "StandinFarPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UStandinFarPipeline : public USimplygonStandinPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemeshingPipelineSettings Settings;

public:
	UStandinFarPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UStandinFarPipeline) { return 0; }
