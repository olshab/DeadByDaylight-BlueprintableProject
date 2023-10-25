#pragma once

#include "CoreMinimal.h"
#include "MatchmakingContextData.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingContextData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient)
	uint32 ContextId;

public:
	DEADBYDAYLIGHT_API FMatchmakingContextData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingContextData) { return 0; }
