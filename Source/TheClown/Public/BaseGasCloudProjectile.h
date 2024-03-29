#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "PhysicsBasedProjectile.h"
#include "Engine/EngineTypes.h"
#include "EBombType.h"
#include "BaseGasCloudProjectile.generated.h"

class UActiveGasCloudTrackerComponent;
class ACamperPlayer;
class USpherePlayerOverlapComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UPoolableProjectileComponent;
class USphereComponent;
class AActor;

UCLASS(Blueprintable)
class ABaseGasCloudProjectile : public APhysicsBasedProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBombType _gasType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPoolableProjectileComponent* _poolableProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudBounciness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _dissipateGasCloudTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudMinimumLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudSimpleCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudComplexCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudSurvivorDetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudDetectionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gasCloudCosmeticFadeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _overlappingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _dissipating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ACamperPlayer*> _overlappingSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UParticleSystemComponent* _gasParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _simpleCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _complexCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* _survivorDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UActiveGasCloudTrackerComponent* _activeGasCloudTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag _cloudSizeModifierTag;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _cumulativeLifetime;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsDissipating(bool isDissipating);

private:
	UFUNCTION(BlueprintCallable)
	void SetIgnoredActors();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetGasAudioActive(bool activated);

public:
	UFUNCTION(BlueprintCallable)
	void OnOverlapEnd(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDelayedActivationStart(float delay);

private:
	UFUNCTION(BlueprintCallable)
	void OnAcquiredChanged(bool acquired);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DissipateGasCloud();

	UFUNCTION(BlueprintPure)
	bool IsSurvivorDetectionEnabled();

	UFUNCTION(BlueprintPure)
	bool IsDissipating();

	UFUNCTION(BlueprintCallable)
	EBombType GetGasType();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DissipateGasCloud();

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetCumulativeLifetime(const float value);

public:
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	float Authority_GetCumulativeLifetime() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateCosmetic_BP();

public:
	ABaseGasCloudProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ABaseGasCloudProjectile) { return 0; }
