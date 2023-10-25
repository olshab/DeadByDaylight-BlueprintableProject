#pragma once

#include "CoreMinimal.h"
#include "DreamPalletSpawnState.generated.h"

USTRUCT(BlueprintType)
struct FDreamPalletSpawnState
{
	GENERATED_BODY()

public:
	DBDBOTS_API FDreamPalletSpawnState();
};

FORCEINLINE uint32 GetTypeHash(const FDreamPalletSpawnState) { return 0; }
