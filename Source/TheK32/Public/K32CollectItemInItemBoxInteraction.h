#pragma once

#include "CoreMinimal.h"
#include "CollectItemInteraction.h"
#include "K32CollectItemInItemBoxInteraction.generated.h"

class AK32ItemBox;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32CollectItemInItemBoxInteraction : public UCollectItemInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK32ItemBox* _owningItemBox;

public:
	UK32CollectItemInItemBoxInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK32CollectItemInItemBoxInteraction) { return 0; }
