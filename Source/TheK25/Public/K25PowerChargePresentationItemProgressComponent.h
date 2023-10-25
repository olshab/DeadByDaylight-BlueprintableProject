#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K25PowerChargePresentationItemProgressComponent.generated.h"

class AK25Power;
class UPowerChargeComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerChargeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK25Power* _k25Power;

public:
	UK25PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25PowerChargePresentationItemProgressComponent) { return 0; }
