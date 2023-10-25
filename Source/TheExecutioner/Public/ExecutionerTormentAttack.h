#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "ExecutionerTormentAttack.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UExecutionerTormentAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_TormentTryHitTargetNotInCoolDown(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TormentHitTarget(ADBDPlayer* target, bool hitCosmeticOnly);

public:
	UExecutionerTormentAttack();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerTormentAttack) { return 0; }
