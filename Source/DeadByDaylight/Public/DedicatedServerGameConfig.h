#pragma once

#include "CoreMinimal.h"
#include "DedicatedServerGameConfig.generated.h"

USTRUCT(BlueprintType)
struct FDedicatedServerGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LatencyRetryCooldownSeconds;

public:
	DEADBYDAYLIGHT_API FDedicatedServerGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerGameConfig) { return 0; }
