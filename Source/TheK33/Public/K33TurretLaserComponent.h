#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K33TurretLaserComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretLaserComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedPlayerChanged();

public:
	UK33TurretLaserComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretLaserComponent) { return 0; }
