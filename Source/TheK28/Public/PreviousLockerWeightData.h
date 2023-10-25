#pragma once

#include "CoreMinimal.h"
#include "PreviousLockerWeightData.generated.h"

USTRUCT(BlueprintType)
struct FPreviousLockerWeightData
{
	GENERATED_BODY()

public:
	THEK28_API FPreviousLockerWeightData();
};

FORCEINLINE uint32 GetTypeHash(const FPreviousLockerWeightData) { return 0; }
