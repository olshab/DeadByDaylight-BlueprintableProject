#pragma once

#include "CoreMinimal.h"
#include "OnIsDamagedChangedEvent.h"
#include "AIPointOfInterestTargetInterface.h"
#include "PlayerFloatTuple.h"
#include "GameplayTagContainer.h"
#include "GeneratorRepairedBySurvivorEvent.h"
#include "Interactable.h"
#include "GeneratorRepairedEvent.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "OnAkPostEventCallback.h"
#include "Generator.generated.h"

class UGeneratorDamageComponent;
class ADBDPlayer;
class UAkComponent;
class UObject;
class ACamperPlayer;
class UChargeableComponent;
class UDischargeUntilThresholdIsReachedComponent;
class UInteractionDefinition;
class UCurveLinearColor;
class UAIPerceptionStimuliSourceComponent;
class UCoopRepairTracker;
class UAkAudioEvent;
class UInteractor;
class USkeletalMeshComponent;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AGenerator : public AInteractable, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Activated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WasASMCachePreWarmTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPlaySkillcheckAesthetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveLinearColor* KillerOutlineFadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NativePercentComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FGeneratorRepairedEvent OnGeneratorRepaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FGeneratorRepairedBySurvivorEvent OnGeneratorRepairedBySurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsDamagedChangedEvent OnIsDamagedChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGeneratorDamageComponent* _generatorDamageComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FireLevelScoreEventOnFix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FTransform> _activatedTopLightsTransformMap;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDischargeUntilThresholdIsReachedComponent* _regressChargeUntilThresholdIsReached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _regressionSpeedWhileDamaged;

	UPROPERTY(EditAnywhere)
	FGameplayTag _repairSemanticTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBlocked, Transient, meta=(AllowPrivateAccess=true))
	bool _isBlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isBlockedFromCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<UObject*> _blockingSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _generatorCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FPlayerFloatTuple> _playerStartTimes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isAutoCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isOvercharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCoopRepairTracker* _coopRepairTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _VFX_LightDistanceDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _damagingInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _authority_cachedInteractingPlayersOnCompletion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultImmediateRegressionPercentage;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void VFXClampTopActivationSingleLight(float distance, FName parameterName);

public:
	UFUNCTION(BlueprintCallable)
	void TriggerSkillCheckFailureLoudNoise(ADBDPlayer* instigatingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerSkillCheck(ADBDPlayer* instigatingPlayer);

private:
	UFUNCTION(BlueprintCallable)
	void StopDischarge();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnBloodEffectToSocket(const FName name);

	UFUNCTION(BlueprintPure)
	bool ShouldDoOverchargeSkillcheck() const;

	UFUNCTION(BlueprintCallable)
	void SetIsOvercharged(const bool overcharged);

	UFUNCTION(BlueprintCallable)
	void SetIsBlockedFromCharging(bool isBlockedFromCharging);

	UFUNCTION(BlueprintCallable)
	void SetIsAutoCompleted(const bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void SetFireLevelScoreEventOnFix(bool fireLevelScoreEventOnFixNew);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetComplete(bool complete);

	UFUNCTION(BlueprintCallable)
	void ResetGenerator();

protected:
	UFUNCTION(BlueprintCallable)
	void RemovePlayerStartTime(const ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFailSparksFX(ADBDPlayer* interactingPlayer, bool explode);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnUpdateChargeProgress(float newPercentComplete);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnResetGenerator();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRepairedBP(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsBlocked();

	UFUNCTION(BlueprintCallable)
	void OnRegressionStateChanged(const bool regressing, ADBDPlayer* lastDamageChangeSource);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPreWarmASMCache();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEscapeDoorActivated();

private:
	UFUNCTION(BlueprintCallable)
	void OnChargeChanged(UChargeableComponent* chargeableComponent, float percent);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCaptureProbeSecondState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnBlockingStatusChanged(const bool isBlocked);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void NotifyRepairStart(const ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void NotifyRepairFinish(const ADBDPlayer* player, UInteractor* interactor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PlayFailSparksFX(ADBDPlayer* player, bool explode);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted, const int32 updatedRemainingGeneratorCount);

public:
	UFUNCTION(BlueprintPure)
	bool IsRepaired() const;

	UFUNCTION(BlueprintPure)
	bool IsBlocked() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingRepaired() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingDamagedByKiller() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetSkeletalMesh() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	float GetRepairPercentComplete() const;

	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetRepairers() const;

	UFUNCTION(BlueprintPure)
	TArray<FPlayerFloatTuple> GetPlayerStartTimes() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetPlayerStartTime(const ADBDPlayer* player) const;

public:
	UFUNCTION(BlueprintPure)
	bool GetIsBlockedFromCharging();

	UFUNCTION(BlueprintPure)
	bool GetIsAutoCompleted() const;

	UFUNCTION(BlueprintPure)
	UGeneratorDamageComponent* GetGeneratorDamageComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UChargeableComponent* GetGeneratorChargeComponent() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetGeneratorAudioComponent() const;

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	float GetChargePercentComplete() const;

private:
	UFUNCTION(BlueprintCallable)
	void DisableInaccessibleInteractors();

protected:
	UFUNCTION(BlueprintPure)
	bool CanSurvivorReactToBlockingEntity(const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintCallable)
	void BroadcastIsDamagedChangedEvent(ADBDPlayer* player);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void BroadcastGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RepairDamage(ADBDPlayer* repairedBy);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveBlockingSource(const UObject* source);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void Authority_CancelRepairInteractions(const TArray<ADBDPlayer*>& repairers) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddTimedBlockingSource(const UObject* source, const float blockingTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddBlockingSource(const UObject* source);

protected:
	UFUNCTION(BlueprintCallable)
	void AddPlayerStartTime(ADBDPlayer* player, float startTime);

public:
	UFUNCTION(BlueprintCallable)
	void AddDamagingInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintImplementableEvent)
	void ActivateTeleportGeneratorIndicator(bool activate) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGenerator();
};

FORCEINLINE uint32 GetTypeHash(const AGenerator) { return 0; }
