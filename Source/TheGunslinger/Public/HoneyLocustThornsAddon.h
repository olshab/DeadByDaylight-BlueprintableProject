#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "HoneyLocustThornsAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHoneyLocustThornsAddon : public UItemAddon
{
	GENERATED_BODY()

public:
	UHoneyLocustThornsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHoneyLocustThornsAddon) { return 0; }
