#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "IridescentStone.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIridescentStone : public UItemAddon
{
	GENERATED_BODY()

public:
	UIridescentStone();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentStone) { return 0; }
