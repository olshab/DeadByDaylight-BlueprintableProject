#pragma once

#include "CoreMinimal.h"
#include "DroneMovementRotationActivationDatum.generated.h"

USTRUCT(BlueprintType)
struct FDroneMovementRotationActivationDatum
{
	GENERATED_BODY()

public:
	THEK31_API FDroneMovementRotationActivationDatum();
};

FORCEINLINE uint32 GetTypeHash(const FDroneMovementRotationActivationDatum) { return 0; }
