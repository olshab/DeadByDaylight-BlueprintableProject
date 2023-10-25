#pragma once

#include "CoreMinimal.h"
#include "DBDFeatureLockProgress.generated.h"

USTRUCT(BlueprintType)
struct FDBDFeatureLockProgress
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FDBDFeatureLockProgress();
};

FORCEINLINE uint32 GetTypeHash(const FDBDFeatureLockProgress) { return 0; }
