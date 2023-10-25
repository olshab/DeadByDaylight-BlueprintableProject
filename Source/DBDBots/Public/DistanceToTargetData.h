#pragma once

#include "CoreMinimal.h"
#include "DistanceToTargetData.generated.h"

USTRUCT(BlueprintType)
struct FDistanceToTargetData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FDistanceToTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FDistanceToTargetData) { return 0; }
