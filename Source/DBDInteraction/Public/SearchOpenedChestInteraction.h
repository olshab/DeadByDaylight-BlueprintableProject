#pragma once

#include "CoreMinimal.h"
#include "SearchChestInteractionBase.h"
#include "SearchOpenedChestInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{
	GENERATED_BODY()

public:
	USearchOpenedChestInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USearchOpenedChestInteraction) { return 0; }
