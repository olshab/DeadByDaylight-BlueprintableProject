#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainerDataAsset.h"
#include "StatusEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStatusEffectDataAsset : public UGameplayModifierContainerDataAsset
{
	GENERATED_BODY()

public:
	UStatusEffectDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffectDataAsset) { return 0; }
