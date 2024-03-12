#pragma once

#include "CoreMinimal.h"
#include "DBDGenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "OnK32KillerPodDisabled.h"
#include "K32KillerPodSettings.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K32KillerPod.generated.h"

class UStaticMeshComponent;
class UMapActorComponent;
class UK32PodDangerPredictionComponent;
class UAIPerceptionStimuliSourceComponent;
class ASlasherPlayer;
class ADBDPlayer;

UCLASS(Blueprintable)
class THEK32_API AK32KillerPod : public AActor, public IPoolableActor, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnK32KillerPodDisabled OnDisabledChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UStaticMeshComponent* _overlapTestingMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _podDisableTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _addon14Delay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Settings, meta=(AllowPrivateAccess=true))
	FK32KillerPodSettings _settings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAcquiredFromPool, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK32PodDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnVisibilityChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Settings(FK32KillerPodSettings previousSettings);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAcquiredFromPool();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPodDisabled();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnDestroyedByRecycle();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnDestroyedByManualRemoval();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnDestroyedByEmp(ADBDPlayer* destroyingSurvivor);

public:
	UFUNCTION(BlueprintPure)
	FK32KillerPodSettings GetSettings() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSettingsChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDisabledChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByRecycle();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByManualRemoval();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyedByEmp(ADBDPlayer* destroyingSurvivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlledByKillerChanged(FK32KillerPodSettings previousSettings, FK32KillerPodSettings settings);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddon14Started();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBlockingPodSpawningChanged(const bool isBlocking, const float distanceBetweenPods);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDisabledTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32KillerPod();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPod) { return 0; }
