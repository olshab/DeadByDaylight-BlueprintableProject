#pragma once

#include "CoreMinimal.h"
#include "DisplayStandControllerData.generated.h"

USTRUCT(BlueprintType)
struct FDisplayStandControllerData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FDisplayStandControllerData();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandControllerData) { return 0; }
