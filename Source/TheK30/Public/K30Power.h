#pragma once

#include "CoreMinimal.h"
#include "DistanceCheckPawnLocationOverride.h"
#include "Collectable.h"
#include "EPowerState.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K30Power.generated.h"

class UK30PowerPresentationComponent;
class UFloatingCameraNavigationComponent;
class UPatrolTrailComponent;
class UInteractor;
class UDrawPatrolPathInteraction;
class AKnightGuard;
class AGuardSlowingZone;
class UKnightOrderComponent;
class UStatusEffect;
class APoseableHusk;
class AGuardPalletSlowingZone;
class UPlayerInteractionHandler;
class UK30SurvivorStatusComponent;
class UGuardPullSurvivorOutOfLocker;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AK30Power : public ACollectable, public IDistanceCheckPawnLocationOverride
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPowerStateChanged, EPowerState, previousState, EPowerState, newState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoriStateChanged);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMoriStateChanged OnMoriBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMoriStateChanged OnMoriEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPowerStateChanged OnPowerStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDrawPatrolPathInteraction* _drawPathInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKnightOrderComponent* _orderComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<AKnightGuard*> _guards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AKnightGuard>> _guardClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _drawPathStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hideSurvivorVFXEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _immuneToBlindEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<APoseableHusk> _knightHuskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGuardPalletSlowingZone> _palletSlowingZoneClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGuardSlowingZone> _vaultSlowingZoneClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK30SurvivorStatusComponent> _k30SurvivorStatusComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UGuardPullSurvivorOutOfLocker> _pullSurvivorOutOfLockerInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_KnightHusk, Transient, meta=(AllowPrivateAccess=true))
	APoseableHusk* _knightHusk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _drawPathIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _drawPathIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPatrolTrailComponent* _patrolTrailComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFloatingCameraNavigationComponent* _floatingCameraNavigationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK30PowerPresentationComponent* _powerPresentationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPlayerInteractionHandler* _interactionHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	uint8 _currentGuardIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	uint8 _nextGuardIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lookAtPreviewSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxPathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _remainingPathLengthPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerReadyDelay;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _isVisibleDuringPathCreationModeTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pathCreationModeOverFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _enableInteractionAfterTeleportationDelay;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnSnappingStateChanged(bool isSnapping);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SendPathNearlyEndingWarning();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_KnightHusk() const;

	UFUNCTION(BlueprintCallable)
	void OnOrderTargetChanged();

public:
	UFUNCTION(BlueprintCallable)
	void OnInteractionStateChanged(bool isCharging, bool isChargeCompleted);

private:
	UFUNCTION(BlueprintCallable)
	void OnEndOverlapWindow(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSnappingStateChanged(bool isSnapping);

public:
	UFUNCTION(BlueprintPure)
	bool IsSnapping() const;

	UFUNCTION(BlueprintPure)
	bool IsDrawingPath() const;

	UFUNCTION(BlueprintPure)
	bool IsChargingPower() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateRemainingPathLength(float remainingPathLengthPercent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPathDrawAvailableEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPathDrawAvailableBegin();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK30Power();
};

FORCEINLINE uint32 GetTypeHash(const AK30Power) { return 0; }
