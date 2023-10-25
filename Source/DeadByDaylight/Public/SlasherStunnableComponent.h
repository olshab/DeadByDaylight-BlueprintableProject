#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "SlasherStunnableComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USlasherStunnableComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_NotifyStunHasBeenProcessed();

public:
	USlasherStunnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherStunnableComponent) { return 0; }
