#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "K35KillerShootAreaBlastCooldownInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK35KillerShootAreaBlastCooldownInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UK35KillerShootAreaBlastCooldownInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK35KillerShootAreaBlastCooldownInteractionDefinition) { return 0; }
