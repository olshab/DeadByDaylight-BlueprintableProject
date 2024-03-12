#pragma once

#include "CoreMinimal.h"
#include "CannibalChainsawHitEventAddon.h"
#include "CannibalAddonBegrimedChains.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCannibalAddonBegrimedChains : public UCannibalChainsawHitEventAddon
{
	GENERATED_BODY()

public:
	UCannibalAddonBegrimedChains();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalAddonBegrimedChains) { return 0; }
