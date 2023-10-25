#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "CollectItemInCrateInteraction.generated.h"

class ASupplyCrateInteractable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UCollectItemInCrateInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASupplyCrateInteractable* _owningSupplyCrate;

public:
	UCollectItemInCrateInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UCollectItemInCrateInteraction) { return 0; }
