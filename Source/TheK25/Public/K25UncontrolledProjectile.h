#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "K25Projectile.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "K25UncontrolledProjectile.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable)
class AK25UncontrolledProjectile : public AK25Projectile, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _projectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _projectileMaximumTravelDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TargetSurvivor, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _targetSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TargetSurvivor();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25UncontrolledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25UncontrolledProjectile) { return 0; }
