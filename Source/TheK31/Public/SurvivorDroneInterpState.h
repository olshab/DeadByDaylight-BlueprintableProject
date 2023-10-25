#pragma once

#include "CoreMinimal.h"
#include "SurvivorDroneInterpState.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorDroneInterpState
{
	GENERATED_BODY()

public:
	THEK31_API FSurvivorDroneInterpState();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorDroneInterpState) { return 0; }
