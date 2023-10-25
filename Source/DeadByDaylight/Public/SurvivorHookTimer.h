#pragma once

#include "CoreMinimal.h"
#include "SurvivorHookTimer.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorHookTimer
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FSurvivorHookTimer();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorHookTimer) { return 0; }
