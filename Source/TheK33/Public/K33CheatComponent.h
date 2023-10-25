#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K33CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K33ForceSpecialMode(uint8 force);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K33DrawTunnelBlockConnections(float secondsToDisplay);

public:
	UK33CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33CheatComponent) { return 0; }
