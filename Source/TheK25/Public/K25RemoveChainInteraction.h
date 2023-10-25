#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K25RemoveChainInteraction.generated.h"

class UK25SurvivorChainAttachmentComponent;
class AK25Chain;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25RemoveChainInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _interactionTimePerChainsAttached;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK25SurvivorChainAttachmentComponent* _cachedSurvivorChainAttachmentComponent;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<AK25Chain> _chainBeingRemoved;

	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent;

public:
	UK25RemoveChainInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25RemoveChainInteraction) { return 0; }
