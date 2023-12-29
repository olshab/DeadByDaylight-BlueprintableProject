#pragma once

#include "CoreMinimal.h"
#include "CamperDistractionData.generated.h"

USTRUCT(BlueprintType)
struct FCamperDistractionData
{
	GENERATED_BODY()

public:
	THEK34_API FCamperDistractionData();
};

FORCEINLINE uint32 GetTypeHash(const FCamperDistractionData) { return 0; }
