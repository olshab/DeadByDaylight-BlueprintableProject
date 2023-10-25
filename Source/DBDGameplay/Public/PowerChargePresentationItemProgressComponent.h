#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "PowerChargePresentationItemProgressComponent.generated.h"

class UPowerChargeComponent;
class UPowerToggleComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPowerChargeComponent* _powerChargeComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _chargeReadyThreshold;

public:
	UPowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerChargePresentationItemProgressComponent) { return 0; }
