#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebPathfinder.generated.h"

UCLASS(Blueprintable)
class UBloodwebPathfinder : public UObject
{
	GENERATED_BODY()

public:
	UBloodwebPathfinder();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebPathfinder) { return 0; }
