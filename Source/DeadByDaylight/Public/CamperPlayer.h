#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "OnHookStateChanged.h"
#include "CharmAttachable.h"
#include "EImmobilizedState.h"
#include "DBDPlayer.h"
#include "OnHPSlotChanged.h"
#include "OnPickedUpEvent.h"
#include "OnGuidedStateChanged.h"
#include "OnImmobilizeStateChanged.h"
#include "OnHookEscapeFailedCosmetic.h"
#include "EHealthType.h"
#include "EGender.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "EAuthoritativeMovementFlag.h"
#include "UObject/NoExportTypes.h"
#include "EGuidedState.h"
#include "CamperPlayer.generated.h"

class UStalkedComponent;
class UInteractionDefinition;
class UCameraAttachmentComponent;
class AActor;
class APlayerController;
class UHookableComponent;
class UScreamComponent;
class UStatusEffect;
class UCurveFloat;
class USurviveTimerScoreEventComponent;
class UCamperStillnessTrackerComponent;
class UBloodTrailSettings;
class UCharacterPositionRecorderComponent;
class USpherePlayerOverlapComponent;
class USurvivorHitSprintEffect;
class UCapsuleComponent;
class UCamperSlashableComponent;
class UAkComponent;
class UMoriableComponent;
class UCharmSpawnerComponent;
class UDBDPawnSensingComponent;
class ACamperPlayer;
class UChargeableComponent;
class UAntiCampSelfUnhookMeterComponent;
class UCamperHealthComponent;
class UCamperBloodTrailComponent;
class UChaseeCharacterComponent;
class UProtectionHitComponent;
class UCamperEndGameComponent;
class UPrimitiveComponent;
class UMoveComponentToComponent;
class UCarriedMovementComponent;
class APawn;
class UAnimationMontageSlave;
class AReverseBearTrap;
class UDBDClipRegionComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ACamperPlayer : public ADBDPlayer, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHookStateChanged OnHookedStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnGuidedStateChanged OnGuidedStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPickedUpEvent OnPickedUpDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPickedUpEvent OnPickedUpEndDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHPSlotChanged OnHPSlotChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnImmobilizeStateChanged OnImmobilizeStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHookEscapeFailedCosmetic OnHookEscapeFailedCosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ReverseBearTrapAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isBeingDissolved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FootprintAudibleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStalkedComponent* StalkedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetToleranceYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetTolerancePitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRecenterOffsetYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRecenterOffsetPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGender Gender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* DropStaggerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* DropStaggerMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeforDeathWhileCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeforDeathWhileHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondsUntilFootprintTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TriggerAfflictionHUDIntro;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	APlayerController* _storedPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCamperStillnessTrackerComponent* _stillnessTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PartiallyHiddenStillnessThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	AActor* _escape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* _overlappingEscape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* ProximityZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* SlashableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* HookSlashableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCamperSlashableComponent* _camperSlashable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMoriableComponent* _moriableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IKOffsetRightFoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IKOffsetLeftFoot;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDPawnSensingComponent* _camperSensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USurviveTimerScoreEventComponent* _surviveTimerScoreComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _foundCampers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _potentialSaviors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCamperHealthComponent* _healthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _hpSlot01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _hpSlot02;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _mendChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UBloodTrailSettings* _bloodTrailSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCamperBloodTrailComponent* _bloodTrailComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCameraAttachmentComponent* _cameraAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharmSpawnerComponent* _charmSpawnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UHookableComponent* _hookableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UProtectionHitComponent* _protectionHitComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UScreamComponent* _screamComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterPositionRecorderComponent* _positionRecorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _lastEscaped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RunInputPressed, Transient, meta=(AllowPrivateAccess=true))
	bool _runInputPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _trapIndicatorActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCamperEndGameComponent* _camperEndGameComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _noOcclusionAkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _attenuationAkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isBeingSacrificed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isWiggleProgressionAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMoveComponentToComponent* _meshMover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCarriedMovementComponent* _carriedMovementComponent;

	UPROPERTY(EditAnywhere, Replicated, Export)
	TWeakObjectPtr<UAntiCampSelfUnhookMeterComponent> _antiCampSelfUnhookMeterComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SprintEffect, Transient, Export, meta=(AllowPrivateAccess=true))
	USurvivorHitSprintEffect* _sprintEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _sprintOnHitEffectClass;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateHealingTimer(float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerPutDownAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerPickUpAnimation();

	UFUNCTION(BlueprintCallable)
	void TriggerAfflictionHUDFeedback();

	UFUNCTION(BlueprintCallable)
	void StopHealingTimer();

	UFUNCTION(BlueprintCallable)
	void StartHealingTimer(float time);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetVignetteVisible(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void SetPlayerExposedVFX();

	UFUNCTION(BlueprintCallable)
	void SetBeingCarried(bool isBeingCarried, ADBDPlayer* carrier);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetRunInput(bool pressed);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetOverlappingEscape(AActor* escape);

	UFUNCTION(BlueprintCallable)
	void RunLocked(bool lock);

	UFUNCTION(BlueprintCallable)
	void ResetPotentialSaviors();

	UFUNCTION(BlueprintCallable)
	void ResetCameraAttach();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RemoveReverseBearTrap();

	UFUNCTION(BlueprintCallable)
	void OnUnhooked();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SprintEffect();

	UFUNCTION(BlueprintCallable)
	void OnRep_RunInputPressed();

	UFUNCTION()
	void OnProximityEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void OnPickUpEnter(ADBDPlayer* picker, float transitionTime);

	UFUNCTION(BlueprintCallable)
	void OnPickUpDenied();

private:
	UFUNCTION(BlueprintCallable)
	void OnPawnSensed(APawn* pawn);

public:
	UFUNCTION(BlueprintCallable)
	void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);

	UFUNCTION(BlueprintCallable)
	void OnHpSlotSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookedStateChangedCosmetic(bool hooked);

public:
	UFUNCTION(BlueprintCallable)
	void OnHooked();

	UFUNCTION(BlueprintCallable)
	void OnFinishedPlaying();

	UFUNCTION(BlueprintCallable)
	void OnDroppedStart(ADBDPlayer* dropper);

	UFUNCTION(BlueprintCallable)
	void OnDroppedEnd(bool clearLeader);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDroppedByBearTrap();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetOverlappingEscape(AActor* escape);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetImmobilized(EImmobilizedState state);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetHookEscapeAutoFail(bool enabled);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetAuthoritativeMovementFlag(EAuthoritativeMovementFlag flag, bool value);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveReverseBearTrap();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EscapeItemEvents(bool isItemFromSpawn);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakeCamperDisappearBleedOut();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MakeCamperDisappear();

	UFUNCTION(BlueprintCallable)
	void Local_SetImmobilized(EImmobilizedState state);

	UFUNCTION(BlueprintCallable)
	void Kill(EHealthType healthType);

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	bool IsVaulting() const;

	UFUNCTION(BlueprintPure)
	bool IsUnintentionallyImmobilized() const;

	UFUNCTION(BlueprintPure)
	bool IsUnhookingSelf() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapped() const;

	UFUNCTION(BlueprintPure)
	bool IsSacrificed() const;

	UFUNCTION(BlueprintCallable)
	bool IsRunLocked();

	UFUNCTION(BlueprintPure)
	bool IsObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	bool IsMovementGuided() const;

	UFUNCTION(BlueprintPure)
	bool IsInNeed() const;

	UFUNCTION(BlueprintPure)
	bool IsInDeathBed() const;

	UFUNCTION(BlueprintPure)
	bool IsImmobilized() const;

	UFUNCTION(BlueprintPure)
	bool IsHooked() const;

	UFUNCTION(BlueprintPure)
	bool IsHealingTimerExpired() const;

	UFUNCTION(BlueprintPure)
	bool IsGuidedBySlasher() const;

	UFUNCTION(BlueprintPure)
	bool IsEscaped() const;

	UFUNCTION(BlueprintPure)
	bool IsDeadOrInParadise() const;

	UFUNCTION(BlueprintPure)
	bool IsCrawling() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingUnhooked() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPutOnHook() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPutDown() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPulledFromCloset() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingPickedUp() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingMended() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingKilled() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingInteractedWith() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingHealed() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingEndGameSacrificed() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingCarried() const;

	UFUNCTION(BlueprintCallable)
	void Input_ToggleRun();

	UFUNCTION(BlueprintCallable)
	void HatchEscapeZoneEntered(AActor* escape);

	UFUNCTION(BlueprintPure)
	bool HasReverseBearTrap() const;

	UFUNCTION(BlueprintPure)
	bool HasHitEvents() const;

	UFUNCTION(BlueprintPure)
	bool HasGuidedAction() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UChargeableComponent* GetWiggleChargeable() const;

	UFUNCTION(BlueprintPure)
	FRotator GetToAimPointRotation() const;

	UFUNCTION(BlueprintPure)
	float GetStillness() const;

	UFUNCTION(BlueprintPure)
	AReverseBearTrap* GetReverseBearTrap() const;

	UFUNCTION(BlueprintPure)
	float GetPercentHealingTimer() const;

	UFUNCTION(BlueprintPure)
	AActor* GetOverlappingEscape() const;

	UFUNCTION(BlueprintPure)
	float GetObsessionTargetWeight() const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfEntityRenderRegions() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetNoOcclusionAudioComponent() const;

	UFUNCTION(BlueprintPure)
	UAnimationMontageSlave* GetMontageFollower();

	UFUNCTION(BlueprintPure)
	UMoveComponentToComponent* GetMeshMover() const;

	UFUNCTION(BlueprintPure)
	float GetMaxGruntDistance(bool isLocalPlayerKiller) const;

	UFUNCTION(BlueprintPure)
	bool GetIsWiggleProgressionAllowed() const;

	UFUNCTION(BlueprintPure)
	bool GetIsBeingDissolved() const;

	UFUNCTION(BlueprintPure)
	EImmobilizedState GetImmobilizedState() const;

	UFUNCTION(BlueprintPure)
	UHookableComponent* GetHookableComponent() const;

	UFUNCTION(BlueprintPure)
	UCamperHealthComponent* GetHealthComponent() const;

	UFUNCTION(BlueprintPure)
	EGuidedState GetGuidedAction() const;

	UFUNCTION(BlueprintPure)
	UDBDClipRegionComponent* GetEntityRenderRegionAtIndex(int32 InIndex) const;

	UFUNCTION(BlueprintPure)
	UChaseeCharacterComponent* GetChaseeCharacterComponent() const;

	UFUNCTION(BlueprintCallable)
	UCamperStillnessTrackerComponent* GetCamperStillnessComponent();

	UFUNCTION(BlueprintPure)
	UCameraAttachmentComponent* GetCameraAttachmentComponent() const;

	UFUNCTION(BlueprintPure)
	UCamperBloodTrailComponent* GetBloodTrailComponent() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAttenuationAudioComponent() const;

	UFUNCTION(BlueprintPure)
	TArray<UDBDClipRegionComponent*> GetAllEntityRenderRegions() const;

	UFUNCTION(BlueprintPure)
	FVector GetAimPoint() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EventOnDeath();

	UFUNCTION(BlueprintCallable)
	void EscapeTutorial();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DoSacrificialDissolve();

	UFUNCTION(BlueprintCallable)
	void DetachFromGuidingPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DecalBlood_Puddles();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetSurvivorCameraArmLengthCommand(float cameraArmLength);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DBD_SetSurvivorCameraArmLength(float cameraArmLength);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetImmobilized(EImmobilizedState state);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_LeaveParadise();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceRun(bool forced);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_CheatEscaped();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	float ComputeInteractionSuccessPercentage(const UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool ComputeHookEscapeResult();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	bool ComputeBeartrapEscapeResult();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_OnSlashedOutOfTrap(ADBDPlayer* requester);

	UFUNCTION(BlueprintPure)
	bool CanRushQuietly() const;

	UFUNCTION(BlueprintPure)
	bool CanBeShocked() const;

	UFUNCTION(BlueprintPure)
	bool CanBePickedUp() const;

	UFUNCTION(BlueprintPure)
	bool CanBeKilled() const;

	UFUNCTION(BlueprintCallable)
	void CallOnDroppedByBearTrap();

	UFUNCTION(BlueprintCallable)
	void Authority_SetImmobilized(EImmobilizedState state);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnSlashed(ADBDPlayer* attacker);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplySprintEffect();

	UFUNCTION(BlueprintCallable)
	void AttachToGuidingPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDropsToRightHand();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDropsToLeftHand();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDrippingToGK_Mori();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddBloodDecalToGK_Mori();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ActivatePlayerExposedVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ActivateLocalPlayerExposedVFX();

	UFUNCTION(BlueprintCallable)
	void ActionInputReleased();

	UFUNCTION(BlueprintCallable)
	void ActionInputPressed();

	UFUNCTION(BlueprintPure)
	bool AcceptsHealing() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ACamperPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ACamperPlayer) { return 0; }
