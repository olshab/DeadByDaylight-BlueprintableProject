#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ExposedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UExposedEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

public:
	UExposedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UExposedEffect) { return 0; }
