#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "EK35KillerTeleportPointState.h"
#include "ObjectStateProvider.h"
#include "BaseHusk.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "K35KillerTeleportPoint.generated.h"

class AK35KillerTeleportPointInteractable;
class USphereComponent;
class UDBDOutlineComponent;
class UPrimitivesRegistererComponent;
class UK35KillerTeleportPointOutlineStrategy;
class UCapsuleComponent;
class UStaticMeshComponent;
class UClippableProviderComponent;
class UDBDNavModifierComponent;
class ADBDPlayer;
class USceneComponent;
class UK35KillerTeleportPointDangerPredictionComponent;
class UGameplayTagContainerComponent;
class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class AK35KillerTeleportPoint : public ABaseHusk, public IPoolableActor, public IObjectStateProvider
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minRotationDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dialogRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _decoyTouchDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerTeleportLingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _spawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK35KillerTeleportPointInteractable> _killerTeleportPointInteractableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK35KillerTeleportPointOutlineStrategy* _outlineStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _targetOverlapComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _playerOverlapComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitivesRegistererComponent* _primitivesRegistererComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UClippableProviderComponent* _clippableProviderComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _headSphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _bodyCapsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USceneComponent*> _visionCheckingPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDNavModifierComponent* _navModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK35KillerTeleportPointDangerPredictionComponent* _dangerPredictionComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KillerTeleportPointState, meta=(AllowPrivateAccess=true))
	EK35KillerTeleportPointState _killerTeleportPointState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAcquiredFromPool, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KillerTeleportPointInteractable, Transient, meta=(AllowPrivateAccess=true))
	AK35KillerTeleportPointInteractable* _killerTeleportPointInteractable;

	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _overlappingPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

protected:
	UFUNCTION(BlueprintCallable)
	void SetHuskVisibilityChecked(const bool isVisible);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_KillerTeleportPointState();

	UFUNCTION(BlueprintCallable)
	void OnRep_KillerTeleportPointInteractable();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool);

	UFUNCTION(BlueprintCallable)
	void OnPlayerOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);

	UFUNCTION()
	void OnPlayerOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnKillerTeleportPointStateChanged(const EK35KillerTeleportPointState newKillerTeleportPointState);

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerTeleportLingerTimeComplete();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnKillerCustomizationMeshChanged();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void OnDecoySpawn(const FVector& location);

	UFUNCTION(BlueprintCallable)
	void OnDecoyDespawn();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCancelledDestroyInteraction(ADBDPlayer* caughtSurvivor);

public:
	UFUNCTION(BlueprintPure)
	bool IsSurvivorAbleToDestroyHusk() const;

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocalPlayerOverlapping() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsKillerTeleportingToThis() const;

	UFUNCTION(BlueprintPure)
	bool IsKillerAbleToTeleportToThisPoint() const;

	UFUNCTION(BlueprintPure)
	EK35KillerTeleportPointState GetState() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVisibilityChanged(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerTeleportPointStateChanged(const EK35KillerTeleportPointState newKillerTeleportPointState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuskFirstTimeActivePerSpawn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCancelledDestroyInteraction(ADBDPlayer* caughtSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAnyPlayerStartsOverlap();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAmountOfOverlappingPlayersChangedDuringOverlap();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAllPlayersStopOverlap();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSpawnComplete();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK35KillerTeleportPoint();
};

FORCEINLINE uint32 GetTypeHash(const AK35KillerTeleportPoint) { return 0; }
