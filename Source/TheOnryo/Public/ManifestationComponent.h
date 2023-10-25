#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "StatProperty.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ManifestationComponent.generated.h"

class UOnryoVisibilityComponent;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONRYO_API UManifestationComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _unmanifestedUndetectableStatusEffectClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lingeringFlickerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTrackedTimeSinceManifest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _manifestInteractionUndetectableLingerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _teleportManifestUndetectableLingeringDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _lingeringUndetectableDurationFromOtherSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _scorePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UOnryoVisibilityComponent* _onryoVisibilityComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UOnryoVisibilityComponent> _onryoVisibilityComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsManifested, Transient, meta=(AllowPrivateAccess=true))
	bool _isManifested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LingeringUndetectableEndTimeStamp, Transient, meta=(AllowPrivateAccess=true))
	float _lingeringUndetectableEndTimeStamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _unmanifestStatusEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_LingeringUndetectableEndTimeStamp();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsManifested();

	UFUNCTION(BlueprintCallable)
	void OnLingeringUndetectableTimerCompleted();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnManifestationTransitionComplete();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnManifestationChanged(const bool isManifested, const bool isImmediateManifest);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AttemptToPalletStunDemanifestedKiller();

	UFUNCTION(BlueprintCallable)
	void Authority_OnMoriStarted();

	UFUNCTION()
	void Authority_AttemptToPalletStunDemanifestedKiller(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UManifestationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UManifestationComponent) { return 0; }
