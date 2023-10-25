#pragma once

#include "CoreMinimal.h"
#include "DangerObjectData.generated.h"

USTRUCT(BlueprintType)
struct FDangerObjectData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FDangerObjectData();
};

FORCEINLINE uint32 GetTypeHash(const FDangerObjectData) { return 0; }
