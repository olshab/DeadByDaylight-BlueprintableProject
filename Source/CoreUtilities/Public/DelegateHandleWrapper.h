#pragma once

#include "CoreMinimal.h"
#include "DelegateHandleWrapper.generated.h"

USTRUCT(BlueprintType)
struct FDelegateHandleWrapper
{
	GENERATED_BODY()

public:
	COREUTILITIES_API FDelegateHandleWrapper();
};

FORCEINLINE uint32 GetTypeHash(const FDelegateHandleWrapper) { return 0; }
