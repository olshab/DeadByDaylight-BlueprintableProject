#pragma once

#include "CoreMinimal.h"
#include "EK26ProjectileState.h"
#include "OnCrowProjectileStateChanged.h"
#include "GameFramework/Actor.h"
#include "PoolableActor.h"
#include "PotentialAttack.h"
#include "UObject/NoExportTypes.h"
#include "K26ProjectileStateDetails.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Engine/EngineTypes.h"
#include "K26ProjectileStateChangeDelegate.h"
#include "OnAcquiredChanged.h"
#include "K26CrowProjectile.generated.h"

class USceneComponent;
class UCurveFloat;
class UDBDSkeletalMeshComponentBudgeted;
class UStaticMeshComponent;
class UK26PowerOutlineUpdateStrategy;
class UDBDOutlineComponent;
class UK26AmmoHandlerComponent;
class USplineComponent;
class UDBDNavModifierComponent;
class ALocker;
class UK26PowerStatusHandlerComponent;
class UK26PathHandlerComponent;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AK26CrowProjectile : public AActor, public IPoolableActor, public IPotentialAttack
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCrowProjectileStateChanged OnCrowProjectileStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector _originalFireLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EK26ProjectileState, FK26ProjectileStateDetails> _projectileStateDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _summonTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _detectionRadiusScaleX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _detectionRadiusScaleY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _detectionRadiusScaleZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _crowFireAuraVisibilityForSurvivorsTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _crowSummonAuraVisibilityForSurvivorsTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _detectionRadiusFromAbove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _baseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _selfDestructTimeOnDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _rangeToTriggerNearSurvivorSFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _onPathMovementSpeedModifierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _offPathMovementSpeedModifierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _projectileOffPathCurveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Path)
	TArray<FVector> _path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	int32 _pooledPathIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK26ProjectileState _currentProjectileState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK26PowerOutlineUpdateStrategy* _crowFlockOutlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(BindWidget))
	USplineComponent* _pathSplineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UStaticMeshComponent* _collisionStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UStaticMeshComponent* _killerInstinctStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDSkeletalMeshComponentBudgeted* _visualSkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _rootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDNavModifierComponent* _dangerNavModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FK26ProjectileStateChangeDelegate _k26ProjectileStateChangeDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ALocker*> _lockersWithSurvivorsInitiallyOnKillerInstinctRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FVector _forwardDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _fireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _currentDistanceAlongSpline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _offPathTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UK26PowerStatusHandlerComponent* _statusHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UK26PathHandlerComponent* _pathHandlerComponent;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnSurvivorHit(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ProjectileWentOutOfBoundsEvent();

	UFUNCTION(BlueprintCallable)
	void OnSurvivorAdded(ACamperPlayer* survivorAdded);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Path();

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnIsWithinSurvivorRangeChanged(AActor* survivorActor, const bool isInRange);

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetState(const EK26ProjectileState newState, const int32 pooledPathIndex);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetStartingPosition(const FVector& position, const FRotator& angle);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnExpiration();

	UFUNCTION(BlueprintCallable)
	void Local_OnSummonComplete();

	UFUNCTION()
	void Local_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintPure)
	bool IsHitboxBeingShown() const;

private:
	UFUNCTION(BlueprintCallable)
	void HideOutlineFromSurvivor();

protected:
	UFUNCTION(BlueprintPure)
	float GetDistanceFromFirePosition() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnExpiration();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(ACamperPlayer* survivor);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_LocalKillerStartSummonTimer(const float killerLocalSummonTime);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSummonComplete();

	UFUNCTION(BlueprintCallable)
	void Authority_OnScoutingOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnScoutingOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyTimerExpired();

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyAttempt(const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(BlueprintCallable)
	void Authority_OnCollisionOverlapEnd(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnCollisionOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK26CrowProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK26CrowProjectile) { return 0; }
