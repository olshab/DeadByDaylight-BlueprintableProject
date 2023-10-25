#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "EPodVisionTransferDestination.h"
#include "K32PodToPodVisionInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32PodToPodVisionInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPodVisionTransferDestination _podVisionTransferDestination;

public:
	UK32PodToPodVisionInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32PodToPodVisionInteractionDefinition) { return 0; }
