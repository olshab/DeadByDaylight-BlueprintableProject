#pragma once

#include "CoreMinimal.h"
#include "PresentationItemProgressComponent.h"
#include "K26PowerChargePresentationItemProgressComponent.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK26PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandler;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler);

public:
	UK26PowerChargePresentationItemProgressComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26PowerChargePresentationItemProgressComponent) { return 0; }
