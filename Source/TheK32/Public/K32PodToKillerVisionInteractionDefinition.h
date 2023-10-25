#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "K32PodToKillerVisionInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32PodToKillerVisionInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _regularWakeupTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _antiCampWakeupMultiplier;

public:
	UK32PodToKillerVisionInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK32PodToKillerVisionInteractionDefinition) { return 0; }
