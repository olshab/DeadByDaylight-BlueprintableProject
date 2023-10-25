#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCache.generated.h"

USTRUCT(BlueprintType)
struct FGameplayModifierCache
{
	GENERATED_BODY()

public:
	COMPETENCE_API FGameplayModifierCache();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayModifierCache) { return 0; }
