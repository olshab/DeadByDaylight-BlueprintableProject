#pragma once

#include "CoreMinimal.h"
#include "FlashlightablePointsLightingStrategy.h"
#include "GameplayTagContainer.h"
#include "BlindFlashlightableLightingStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _flashlightableIgnoreTags;

public:
	UBlindFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBlindFlashlightableLightingStrategy) { return 0; }
