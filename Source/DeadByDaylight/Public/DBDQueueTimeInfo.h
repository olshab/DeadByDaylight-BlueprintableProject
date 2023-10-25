#pragma once

#include "CoreMinimal.h"
#include "DBDQueueTimeInfo.generated.h"

USTRUCT(BlueprintType)
struct FDBDQueueTimeInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FDBDQueueTimeInfo();
};

FORCEINLINE uint32 GetTypeHash(const FDBDQueueTimeInfo) { return 0; }
