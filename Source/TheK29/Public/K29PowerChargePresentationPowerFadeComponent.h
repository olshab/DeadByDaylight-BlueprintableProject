#pragma once

#include "CoreMinimal.h"
#include "PresentationPowerFadeComponent.h"
#include "K29PowerChargePresentationPowerFadeComponent.generated.h"

class UK29RushChargesHandlerComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK29RushChargesHandlerComponent* ammoHandler);

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UK29PowerChargePresentationPowerFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PowerChargePresentationPowerFadeComponent) { return 0; }
