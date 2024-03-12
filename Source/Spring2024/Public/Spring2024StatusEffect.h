#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Spring2024StatusEffect.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class USpring2024StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	USpring2024StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const USpring2024StatusEffect) { return 0; }
