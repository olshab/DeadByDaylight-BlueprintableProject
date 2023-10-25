#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BearTrapKillerComponent.generated.h"

class ABearTrap;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBearTrapKillerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_TryDisarmTrap(ABearTrap* trapToDisarm);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DisarmTrap(ABearTrap* trapToDisarm);

public:
	UBearTrapKillerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBearTrapKillerComponent) { return 0; }
