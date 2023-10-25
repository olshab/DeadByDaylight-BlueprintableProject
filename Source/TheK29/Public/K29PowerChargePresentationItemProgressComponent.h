#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K29PowerChargePresentationItemProgressComponent.generated.h"

class UK29PowerStatusHandlerComponent;
class UK29RushChargesHandlerComponent;
class UK29RushChargeableInteraction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29PowerStatusHandlerComponent* _statusHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29RushChargeableInteraction* _rushInteraction;

public:
	UK29PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerChargePresentationItemProgressComponent) { return 0; }
