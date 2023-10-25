#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "SetGroundPortalInteraction.generated.h"

class UDemogorgonPortalPlacerStateComponent;
class UObjectPlacerComponent;
class ADemogorgonPortal;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UObjectPlacerComponent* _trapPlacerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ADemogorgonPortal> _portalClassToSpawn;

public:
	USetGroundPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USetGroundPortalInteraction) { return 0; }
