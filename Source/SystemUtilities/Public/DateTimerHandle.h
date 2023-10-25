#pragma once

#include "CoreMinimal.h"
#include "DateTimerHandle.generated.h"

USTRUCT(BlueprintType)
struct FDateTimerHandle
{
	GENERATED_BODY()

public:
	SYSTEMUTILITIES_API FDateTimerHandle();
};

FORCEINLINE uint32 GetTypeHash(const FDateTimerHandle) { return 0; }
