#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K35PowerChargePresentationItemProgressComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

public:
	UK35PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35PowerChargePresentationItemProgressComponent) { return 0; }
