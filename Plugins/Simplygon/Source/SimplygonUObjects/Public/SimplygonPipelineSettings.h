#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.generated.h"

USTRUCT(BlueprintType)
struct FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	SIMPLYGONUOBJECTS_API FSimplygonPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FSimplygonPipelineSettings) { return 0; }
