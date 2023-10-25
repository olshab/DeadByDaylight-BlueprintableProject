#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TheTwinsCheatComponent.generated.h"

class UTwinPossessionComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTheTwinsCheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TrySendThePlayerBackInKiller(UTwinPossessionComponent* twinPossessionComponent);

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TwinDestroyTheTwin();

public:
	UTheTwinsCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTheTwinsCheatComponent) { return 0; }
