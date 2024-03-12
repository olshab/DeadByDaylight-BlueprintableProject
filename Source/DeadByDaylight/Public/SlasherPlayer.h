#pragma once

#include "CoreMinimal.h"
#include "EStunType.h"
#include "DBDPlayer.h"
#include "KillerControls.h"
#include "EAttackType.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DBDTimer.h"
#include "EKillerAbilities.h"
#include "AnimationMontageDescriptor.h"
#include "TargetFocusTimer.h"
#include "TagStateBool.h"
#include "GameplayTagContainer.h"
#include "EAttackZoneSet.h"
#include "EKillerCarryAnimWeight.h"
#include "SlasherPlayer.generated.h"

class UDBDNavModifierComponent;
class AActor;
class UKillerSoundCuesComponent;
class UKillerBlindingFXComponent;
class UAkComponent;
class ACamperExposerInstance;
class UKillerBloodFXComponent;
class UStillnessTrackerComponent;
class UMoriComponent;
class UHitValidatorConfigurator;
class ULoudNoiseHUDIndicator;
class USlasherHitsWhileCarryingTrackerComponent;
class UArmIKSensorComponent;
class ACamperPlayer;
class UKillerIntroComponent;
class UFinisherMoriTrackerComponent;
class UHitValidatorComponent;
class UDBDAttackerComponent;
class UFirstPersonViewComponent;
class UKillerRedStainUpdateStrategy;
class USceneComponent;
class USlasherStunnableComponent;
class USlasherMovementComponent;
class UChaserCharacterComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ASlasherPlayer : public ADBDPlayer, public IKillerControls
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStalkModeChangedEvent, bool, isInStalkMode);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _setFirstPersonModeEnabledOnKillerIntroCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PutDownTraceLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultSlasherPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoudNoiseDisplayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetPriorityFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShouldDisplayAttackZones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACamperExposerInstance> CamperExposer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EKillerAbilities> KillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UKillerSoundCuesComponent* KillerSoundCuesComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowKillerPowerDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStalkModeChangedEvent OnStalkModeChangedEvent;

protected:
	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	TWeakObjectPtr<UAkComponent> _audioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDNavModifierComponent* _terrorNavModifierComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKillerBloodFXComponent* _bloodFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _slasherLightIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _defaultAmountToSquish;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<ADBDPlayer*, FTargetFocusTimer> _stalkTimers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UStillnessTrackerComponent* _stillnessTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDBDTimer _recentlyCloakedTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDBDTimer _flashlightBlindEvasionScoreTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDBDTimer _flashlightBurnoutEvasionScoreTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<ADBDPlayer*, FAnimationMontageDescriptor> _predictedCamperHitMontages;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULoudNoiseHUDIndicator* _loudNoiseIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USlasherHitsWhileCarryingTrackerComponent* _hitsWhileCarryingTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _stealthIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _stealthDecreaseRate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime _stillnessStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInStalkMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isKilling;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	int8 _allowedKillCount;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	int8 _allowedKillAfterStrugglePhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _allowedKillLastSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _cachedBloodlustTier;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	uint32 _killerPowerDebugFlags;

	UPROPERTY(EditAnywhere)
	FGameplayTag _presenceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _persistantStateTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _enableKillerCrouchInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canStartAttackWhileCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _carriedCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMoriComponent* _moriComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFinisherMoriTrackerComponent* _finisherMoriTrackerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorComponent* _hitValidator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHitValidatorConfigurator* _hitValidationConfigurator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDAttackerComponent* _attackerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EAttackType _basicAttackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UArmIKSensorComponent* _armIKSensorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _survivorBeingKilled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UFirstPersonViewComponent> _firstPersonViewComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UFirstPersonViewComponent* _firstPersonViewComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UKillerIntroComponent* _killerIntroComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKillerBlindingFXComponent* _blindingFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UKillerRedStainUpdateStrategy* _redStainUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _squishFactorParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _attackZonePivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USlasherStunnableComponent* _slasherStunnableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _forceThirdPersonAnimations;

public:
	UFUNCTION(BlueprintPure)
	bool WasRecentlyCloaked() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateRageTierEffect(int32 previousTier, int32 currentTier);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SpawnSlasherPower();

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool ShouldApplyBloodlustSpeedModifier() const;

	UFUNCTION(BlueprintCallable)
	void SetSurvivorBeingKilled(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void SetStalkTierWalkSpeedMultiplier(float stalkTierWalkSpeedMultiplier);

	UFUNCTION(BlueprintCallable)
	void SetLightIntensity(float intensity);

	UFUNCTION(BlueprintCallable)
	void SetIsKilling(bool isKilling);

	UFUNCTION(BlueprintCallable)
	void SetIsHookingSurvivor(const bool value);

protected:
	UFUNCTION(BlueprintCallable)
	void SetIsCloaked(bool isCloaked, bool forced);

public:
	UFUNCTION(BlueprintCallable)
	void SetForceThirdPersonAnimations(bool forceThirdPerson);

	UFUNCTION(BlueprintCallable)
	void SetCarriedCamper(ACamperPlayer* camper);

	UFUNCTION(BlueprintCallable)
	void SetAttackZonePivot(USceneComponent* attackZonePivot);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendAttackInput(bool pressed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PlayBloodHitsEffects();

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorsLeftChanged(int32 survivorRemaining);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStealthChanged(bool stealth);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnStalkModeChangedCosmetic(bool stalkMode);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStalkModeChanged(bool stalkMode);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPerformingChargableInteraction(float Progress);

private:
	UFUNCTION(BlueprintCallable)
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

	UFUNCTION(BlueprintCallable)
	void OnLoudNoiseIndicatorDestroyed();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityUpdateActivate(EKillerAbilities killerAbility, float percent);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityEndDeactivate(EKillerAbilities killerAbility, bool forced);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityEndActivate(EKillerAbilities killerAbility);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityBeginDeactivate(EKillerAbilities killerAbility, bool forced);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnKillerAbilityBeginActivate(EKillerAbilities killerAbility);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIsKillingSurvivorWithMoriUpdated(bool isKillingSurvivorWithMori);

public:
	UFUNCTION(BlueprintCallable)
	void OnDropCamperEnd(ADBDPlayer* camper);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCamperHit(ACamperPlayer* camper);

private:
	UFUNCTION(BlueprintCallable)
	void OnAttackStart(const EAttackType attackType);

	UFUNCTION(BlueprintCallable)
	void OnAttackFinish(const EAttackType attackType);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_MergeLockOnDamageZones(bool enable);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DisplayAttackZones(bool display);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Cheat_SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MergeLockOnDamageZones(bool enable);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool Local_CancelAttack();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsUncloaking() const;

	UFUNCTION(BlueprintPure)
	bool IsStunned() const;

	UFUNCTION(BlueprintPure)
	bool IsOfferingAllowingKill(const ACamperPlayer* camper) const;

	UFUNCTION(BlueprintPure)
	bool IsKilling() const;

	UFUNCTION(BlueprintPure)
	bool IsInterruptBlocked() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsImmuneToObservingPlayerDetection(const ADBDPlayer* observingPlayer) const;

	UFUNCTION(BlueprintCallable)
	bool IsIdling();

	UFUNCTION(BlueprintPure)
	bool IsHooking() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsCrouchAvailable_BP();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsCloaking() const;

	UFUNCTION(BlueprintPure)
	bool IsCarrying() const;

	UFUNCTION(BlueprintPure)
	bool IsAllowedToKill(const ACamperPlayer* camper) const;

	UFUNCTION(BlueprintCallable)
	void IncrementInterruptBlock();

	UFUNCTION(BlueprintPure)
	bool HasPreLevelGenerationModifier(FName modifierID) const;

	UFUNCTION(BlueprintPure)
	bool HasKillerAbility(EKillerAbilities killerAbility) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivorBeingKilled() const;

	UFUNCTION(BlueprintPure)
	FDateTime GetStillnessStartTime() const;

	UFUNCTION(BlueprintPure)
	float GetStealthRatio() const;

	UFUNCTION(BlueprintPure)
	float GetStalkTierWalkSpeedMultiplier() const;

	UFUNCTION(BlueprintPure)
	USlasherMovementComponent* GetSlasherMovement() const;

	UFUNCTION(BlueprintPure)
	int32 GetRageTier() const;

	UFUNCTION(BlueprintPure)
	FGameplayTag GetPresenceTag() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetPlayerDropOffPoint() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	FRotator GetLookRotation() const;

	UFUNCTION(BlueprintPure)
	float GetLightIntensity() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	EKillerCarryAnimWeight GetKillerCarryAnimWeight() const;

	UFUNCTION(BlueprintPure)
	bool GetIsForceThirdPersonAnimations() const;

	UFUNCTION(BlueprintPure)
	bool GetIsAttacking() const;

	UFUNCTION(BlueprintCallable)
	float GetCurrentRotationYaw();

	UFUNCTION(BlueprintPure)
	UChaserCharacterComponent* GetChaserCharacterComponent() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	TArray<FName> GetCharacterCustomAnimTags() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetCarriedCamper() const;

	UFUNCTION(BlueprintPure)
	float GetBlindedPercent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	USceneComponent* GetAttackZonePivot();

	UFUNCTION(BlueprintPure)
	float GetAnimDirection() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayAttackZones(bool display);

	UFUNCTION(BlueprintCallable)
	void DecrementInterruptBlock();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetAttackZones(EAttackZoneSet attackZoneSet);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_MergeLockOnDamageZones(bool enable);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DisplayAttackZones(bool display);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AllowKilling();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPickUpEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDropCamperEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCancelCarry();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_RequestStun(EStunType stunType, ADBDPlayer* stunner);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanSlashAttack_BP() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanPerformKillerAbility(EKillerAbilities killerAbility) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanGainRage() const;

	UFUNCTION(BlueprintCallable)
	bool CancelAttackByInput();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanAttack_BP(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool CanAttack(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool CanAffectLocalPlayer() const;

	UFUNCTION(BlueprintCallable)
	void BroadcastOnInstantTeleport();

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void BroadcastOffensiveAction() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetInStalkMode(bool stalkMode, bool forced);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AllowKilling(int32 numKills);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASlasherPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ASlasherPlayer) { return 0; }
