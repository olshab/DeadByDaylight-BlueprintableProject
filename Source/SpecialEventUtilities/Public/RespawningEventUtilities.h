#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RespawningEventUtilities.generated.h"

UCLASS(Blueprintable)
class SPECIALEVENTUTILITIES_API URespawningEventUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	URespawningEventUtilities();
};

FORCEINLINE uint32 GetTypeHash(const URespawningEventUtilities) { return 0; }
