#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K31PowerChargePresentationPowerFadeComponent.generated.h"

class AK31Power;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK31PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31Power* _originatingPower;

public:
	UK31PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31PowerChargePresentationPowerFadeComponent) { return 0; }
