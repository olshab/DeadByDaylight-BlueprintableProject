#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MatchmakingMonitor.generated.h"

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UMatchmakingMonitor : public UObject
{
	GENERATED_BODY()

public:
	UMatchmakingMonitor();
};

FORCEINLINE uint32 GetTypeHash(const UMatchmakingMonitor) { return 0; }
