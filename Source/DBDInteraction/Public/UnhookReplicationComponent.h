#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnhookReplicationComponent.generated.h"

class ACamperPlayer;
class UUnhook;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UUnhookReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetPlayerBeingUnhooked(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked);

public:
	UUnhookReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUnhookReplicationComponent) { return 0; }
