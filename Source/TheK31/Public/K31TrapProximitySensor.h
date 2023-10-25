#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31TrapProximitySensor.generated.h"

class UGameplayTagContainerComponent;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31TrapProximitySensor : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UGameplayTagContainerComponent*> _registeredObjectStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _trappedPlayersInZone;

public:
	UK31TrapProximitySensor();
};

FORCEINLINE uint32 GetTypeHash(const UK31TrapProximitySensor) { return 0; }
