#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "K32BaseProjectile.generated.h"

UCLASS(Blueprintable)
class AK32BaseProjectile : public AActor, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _speedInMeterPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hitDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAcquiredFromPool, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileVisible();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileHidden();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32BaseProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK32BaseProjectile) { return 0; }
