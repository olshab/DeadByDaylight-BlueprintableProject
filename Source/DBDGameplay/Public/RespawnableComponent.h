#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EGameplayElementType.h"
#include "ETileSpawnPointType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RespawnableComponent.generated.h"

class UTileSpawnPoint;
class UActorSpawner;
class UDebugTimerLogComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API URespawnableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCosmeticNeeded);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnRespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnDespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCosmeticNeeded Cosmetic_OnFirstSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasStartedRespawning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasExceededMinRespawnTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameplayElementType _gameplayElementSpawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType _tileSpawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActorSpawner* _actorSpawnerInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTileSpawnPoint* _tileSpawnInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _usesTimers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _respawnFrequencyMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _respawnFrequencyMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _disappearDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minTimeBetweenRespawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _spawnHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _usesGameplayElementSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OnLocationChanged, meta=(AllowPrivateAccess=true))
	FVector _actorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _collisionCapsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UDebugTimerLogComponent* _debugLogTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyLimitDistanceBetweenSameActorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromActivatedSpawnElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TEnumAsByte<ECollisionChannel>> _collisionChannelsToCheckOnRespawn;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OnLocationChanged();

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable)
	void OnDespawnCosmeticsComplete();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool Authority_TryTeleport();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTimerDone();

	UFUNCTION(BlueprintCallable)
	void Authority_OnMinRespawnTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URespawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const URespawnableComponent) { return 0; }
