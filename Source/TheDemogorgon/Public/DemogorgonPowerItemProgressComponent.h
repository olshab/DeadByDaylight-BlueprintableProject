#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "DemogorgonPowerItemProgressComponent.generated.h"

class UDemogorgonPortalPlacerStateComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

public:
	UDemogorgonPowerItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPowerItemProgressComponent) { return 0; }
