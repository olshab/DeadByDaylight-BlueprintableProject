#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorDisconnectionComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorDisconnectionComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerDisconnected(ADBDPlayer* player);

public:
	USurvivorDisconnectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorDisconnectionComponent) { return 0; }
