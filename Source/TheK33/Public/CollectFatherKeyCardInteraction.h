#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "CollectFatherKeyCardInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCollectFatherKeyCardInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

public:
	UCollectFatherKeyCardInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCollectFatherKeyCardInteraction) { return 0; }
