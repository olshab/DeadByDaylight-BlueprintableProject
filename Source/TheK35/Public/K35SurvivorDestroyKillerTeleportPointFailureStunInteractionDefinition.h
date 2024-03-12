#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K35SurvivorDestroyKillerTeleportPointFailureStunInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35SurvivorDestroyKillerTeleportPointFailureStunInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK35SurvivorDestroyKillerTeleportPointFailureStunInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35SurvivorDestroyKillerTeleportPointFailureStunInteractionDefinition) { return 0; }
