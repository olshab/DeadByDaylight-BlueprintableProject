#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K35PowerChargePresentationPowerFadeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

public:
	UK35PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35PowerChargePresentationPowerFadeComponent) { return 0; }
