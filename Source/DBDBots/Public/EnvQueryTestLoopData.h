#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTestLoopData.generated.h"

USTRUCT(BlueprintType)
struct FEnvQueryTestLoopData
{
	GENERATED_BODY()

public:
	DBDBOTS_API FEnvQueryTestLoopData();
};

FORCEINLINE uint32 GetTypeHash(const FEnvQueryTestLoopData) { return 0; }
