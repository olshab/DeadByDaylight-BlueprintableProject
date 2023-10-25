#pragma once

#include "CoreMinimal.h"
#include "GameplayFlagCache.generated.h"

USTRUCT(BlueprintType)
struct FGameplayFlagCache
{
	GENERATED_BODY()

public:
	COMPETENCE_API FGameplayFlagCache();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayFlagCache) { return 0; }
