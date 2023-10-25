#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileReplicationComponent.h"
#include "LaunchInfo.h"
#include "K25ProjectileDeactivationData.h"
#include "K25ProjectileReplicationComponent.generated.h"

class AK25Projectile;
class AK25Chain;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetAttachedChain(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DeactivateProjectile(AK25Projectile* projectile, const FK25ProjectileDeactivationData& deactivationData);

public:
	UK25ProjectileReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ProjectileReplicationComponent) { return 0; }
