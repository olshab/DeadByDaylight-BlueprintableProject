#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "BlinkPowerItem.generated.h"

class UChargeableComponent;
class UInteractor;

UCLASS(Blueprintable)
class THENURSE_API ABlinkPowerItem : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _powerInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _blinkChargeable;

public:
	ABlinkPowerItem();
};

FORCEINLINE uint32 GetTypeHash(const ABlinkPowerItem) { return 0; }
