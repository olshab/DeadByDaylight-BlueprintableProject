#pragma once

#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KillerProjectile.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "K35KillerAreaBlastTravelProjectile.generated.h"

class UKillerProjectileDodgeComponent;
class UPrimitiveComponent;
class USphereComponent;
class ASlasherPlayer;
class UStatusEffect;
class AActor;
class ACamperPlayer;

UCLASS(Blueprintable)
class AK35KillerAreaBlastTravelProjectile : public AKillerProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _environmentCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _playerCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKillerProjectileDodgeComponent* _killerProjectileDodge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _projectileTimeoutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _maxAllowedBounces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _bounciness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _friction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _hinderedOnPassThroughLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hinderedOnPassThroughStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isProjectileActive;

private:
	UFUNCTION()
	void OnSurvivorHitDetected(UPrimitiveComponent* component, const FHitResult& hit);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnProjectileReachedEnd(const FVector endLocation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_BreakWallOrDownedPallet(AActor* wallOrPallet);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileHitSurvivor(ACamperPlayer* survivor, const float hinderedLifetime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileHitEnvironment(const FVector& impactLocation, const FVector& impactNormal, const TEnumAsByte<EPhysicalSurface>& surfaceType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLaunch();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEndReached();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnProjectileTimeout();

	UFUNCTION()
	void Authority_OnEnvironmentCollisionComponentOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool isFromSweep, const FHitResult& sweepResult);

	UFUNCTION()
	void Authority_OnEnvironmentCollisionComponentHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

public:
	AK35KillerAreaBlastTravelProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK35KillerAreaBlastTravelProjectile) { return 0; }
