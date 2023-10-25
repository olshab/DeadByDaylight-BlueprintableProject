#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "TrapInteractableInteraction.generated.h"

class AInteractable;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UTrapInteractableInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AInteractable* _owningInteractable;

public:
	UTrapInteractableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTrapInteractableInteraction) { return 0; }
