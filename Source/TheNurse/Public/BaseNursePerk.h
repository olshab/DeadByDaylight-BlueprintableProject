#pragma once

#include "CoreMinimal.h"
#include "SpawningEffectPerk.h"
#include "BaseNursePerk.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBaseNursePerk : public USpawningEffectPerk
{
	GENERATED_BODY()

public:
	UBaseNursePerk();
};

FORCEINLINE uint32 GetTypeHash(const UBaseNursePerk) { return 0; }
