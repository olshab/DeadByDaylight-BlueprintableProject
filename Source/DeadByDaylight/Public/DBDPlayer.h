#pragma once

#include "CoreMinimal.h"
#include "ObjectStateProvider.h"
#include "SecondaryActionInputDelegate.h"
#include "EffectCameraTypeSettings.h"
#include "DamageTargetDelegate.h"
#include "PerkOwnerInterface.h"
#include "OnAttackedEvent.h"
#include "DynamicGrassEffectorInterface.h"
#include "ScoreEventData.h"
#include "DBDGenericTeamAgentInterface.h"
#include "PerkManagerOwnerInterface.h"
#include "Components/SkinnedMeshComponent.h"
#include "OnLocallyObservedChangedForPlayer.h"
#include "DBDBasePlayer.h"
#include "OnRunningAndMovingChanged.h"
#include "Perception/AISightTargetInterface.h"
#include "PushableInterface.h"
#include "UObject/NoExportTypes.h"
#include "EStunType.h"
#include "OnSensedDelegate.h"
#include "OnForwardInputLockedChanged.h"
#include "AnimNotifyDelegate_Pickup.h"
#include "OnFirstPersonModeChanged.h"
#include "AnimNotifyDelegate_Release.h"
#include "OnDreamworldComponentSet.h"
#include "Templates/SubclassOf.h"
#include "EAttackSubstate.h"
#include "ECamperState.h"
#include "GameplayTagContainer.h"
#include "EDetectionZone.h"
#include "OnMovementCacheStruct.h"
#include "EInputInteractionType.h"
#include "EDBDScoreTypes.h"
#include "EAnimNotifyType.h"
#include "EquippedPlayerCustomization.h"
#include "AnimationMontageDescriptor.h"
#include "Engine/EngineTypes.h"
#include "EPlayerTeam.h"
#include "EPlayerRole.h"
#include "EInteractionAnimation.h"
#include "EPawnType.h"
#include "InteractionPlayerProperties.h"
#include "DBDPlayer.generated.h"

class USpringArmComponent;
class UAIPerceptionStimuliSourceComponent;
class UPlayerPerspectiveComponent;
class UCameraHandlerComponent;
class UActivatorComponent;
class UStateMachine;
class ADBDPlayer;
class USceneComponent;
class UStatusEffect;
class UOtherCharactersVerticalCollisionsHandler;
class UCurveFloat;
class UPlayerGameRelevancyComponent;
class UMaterialHelper;
class UInteractionDefinition;
class UCharacterChaseVisualComponent;
class UCameraComponent;
class UAudioFXComponent;
class UZoneDetectorComponent;
class UReversibleActionSystemComponent;
class APlayerInteractable;
class UCharacterDreamworldComponent;
class APawn;
class UNavigationStateComponent;
class UPrimitiveComponent;
class UCharacterInventoryComponent;
class UBoxOcclusionQueryComponent;
class UBoxComponent;
class USoundCue;
class ADBDPlayerController;
class UDBDPlayerData;
class UCharacterSightableComponent;
class UPerkManager;
class UPlayerInteractionHandler;
class UCharacterSightComponent;
class UChargeableComponent;
class AActor;
class UChaseComponent;
class UGameplayTagContainerComponent;
class UBlindableComponent;
class ADBDPlayerCameraManager;
class UPollableEventListener;
class UDynamicCapsuleResizerComponent;
class UAuthoritativeMovementComponent;
class UInteractionDetectorComponent;
class UPrimitivesRegistererComponent;
class UClippableProviderComponent;
class UContextualQuestComponent;
class AController;
class UActorComponent;
class UChargeableProgressProviderComponent;
class ADBDPlayerState;
class UItemModifier;
class UItemAddon;
class AInteractable;
class APlayerState;
class UGameplayModifierContainer;
class UInteractor;

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API ADBDPlayer : public ADBDBasePlayer, public IPerkOwnerInterface, public IPerkManagerOwnerInterface, public IObjectStateProvider, public IDBDGenericTeamAgentInterface, public IAISightTargetInterface, public IPushableInterface, public IDynamicGrassEffectorInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCrouchedChanged, bool, isCrouched);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowInterrupting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinFallHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInInteractionUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteractionChargeCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchLimitLower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchLimitUpper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StrafingOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PelvisHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PelvisHeightForPounceOnStandingCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PelvisHeightForPounceOnCrouchingCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnAttackedEvent Authority_OnAttackedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDamageTargetDelegate OnDamageTargetDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSensedDelegate OnSensed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAnimNotifyDelegate_Pickup OnAnimNotify_Pickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAnimNotifyDelegate_Release OnAnimNotify_Release;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FSecondaryActionInputDelegate Authority_OnSecondaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFirstPersonModeChanged OnFirstPersonModeChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDreamworldComponentSet OnDreamworldComponentSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnForwardInputLockedChanged OnForwardInputLockedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForceSkillChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTransform IKLeftHandTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTransform IKRightHandTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraResetSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSpeedBufferTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AlmostCurrentSpeedBufferTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadYawCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadSettingToYawRateCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* GamepadSettingToPitchRateCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* JoyconSettingToYawRateCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* JoyconSettingToPitchRateCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsCrouchedChanged OnIsCrouchedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnRunningAndMovingChanged OnRunningAndMovingChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLocallyObservedChangedForPlayer OnLocallyObservedChangedForPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UMaterialHelper* MaterialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APlayerInteractable> Interactable;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCharacterInventoryComponent* _characterInventoryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CarryJointName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pitchOffsetForInteractionPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxOcclusionQueryComponent* _renderedPixelCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _standingOcclusionBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxComponent* _crouchingOcclusionBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UActivatorComponent* _activator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiCanBeSeenTestCrouchScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiCanBeSeenTestRightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiCanBeSeenTestHighOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _aiCanBeSeenTestLowOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestRadiusMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestHeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationClearTestRadiusMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationClearTestHeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClearPathTestStepHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseTurnSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseLookUpSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundCue* DeathSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECamperState CurrentCamperState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CollectableAttachPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UStateMachine* _stateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPlayerInteractionHandler* _interactionHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPerkManager* _perkManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDPlayerData* _playerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Interactable, Transient)
	APlayerInteractable* _interactable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _carryingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _interactingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EAttackSubstate _nextAttackSubstate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ADBDPlayer*> _hitTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DreamworldComponent, meta=(BindWidget))
	UCharacterDreamworldComponent* _dreamworldComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCharacterChaseVisualComponent* _characterChaseVisualComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCameraHandlerComponent* _cameraHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UReversibleActionSystemComponent* _reversibleActionSystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _itemDropOffPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<AActor*> _ignoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEffectCameraTypeSettings> EffectCameraTypeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<USceneComponent*, bool> _detectionZoneEnabledMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _blindingChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldUpdateStateMachineDriverOnPossessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBlindableComponent* _blindableComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _tutorialChargeableInteractionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPollableEventListener* _eventListener;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChaseComponent* _chaseComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UZoneDetectorComponent* _meatHookZoneDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UZoneDetectorComponent* _basementZoneDetector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _animGameplayTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _bookmarkedInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<EDetectionZone, UPrimitiveComponent*> _detectionZoneMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeMovementComponent* _authoritativeMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _screenAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAudioFXComponent* _audioFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPlayerPerspectiveComponent* _playerPerspectiveComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterSightComponent* _characterSightComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterSightableComponent* _characterSightableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UNavigationStateComponent* _navigationStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDetectorComponent* _interactionDetectorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitivesRegistererComponent* _clippablePrimitivesRegistererComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UClippableProviderComponent* _clippableProviderComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDynamicCapsuleResizerComponent* _dynCapsuleResizer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPlayerGameRelevancyComponent* _playerGameRelevancyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UContextualQuestComponent* _contextualQuestComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActorComponent* _questEventHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableProgressProviderComponent* _presentationChargeableProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _currentGamepadYawCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _currentGamepadPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayerState* _associatedPlayerStateCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FOnMovementCacheStruct _onMovementCacheStruct;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UOtherCharactersVerticalCollisionsHandler* _otherCharactersVerticalCollisionsHandler;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLoadoutFromInventory() const;

	UFUNCTION(BlueprintCallable)
	bool TryInteractionType(EInputInteractionType interactionInputType, ADBDPlayer* requester, bool usingInputPersistence, bool force);

	UFUNCTION(BlueprintCallable)
	bool TryInteraction(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence);

	UFUNCTION(BlueprintCallable)
	bool TryFireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);

	UFUNCTION(BlueprintCallable)
	void TriggerAnimNotify(EAnimNotifyType animNotifyType);

	UFUNCTION(BlueprintCallable)
	void SnapCharacter(bool snapPosition, FVector position, float stopSnapDistance, bool snapRotation, FRotator rotation, float time, bool useZCoord, bool sweepOnFinalSnap, bool snapRoll);

	UFUNCTION(BlueprintPure)
	bool ShouldPlayCarryAnim() const;

	UFUNCTION(BlueprintPure)
	bool ShouldFall() const;

	UFUNCTION(BlueprintCallable)
	void SetShouldPlayCarryAnim(bool shouldPlayCarryAnim);

	UFUNCTION(BlueprintCallable)
	void SetReverseMontage(bool reverse);

	UFUNCTION(BlueprintCallable)
	void SetQuestEventHandlerComponent(UActorComponent* component);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void SetItemUseAsToggle(bool value);

	UFUNCTION(BlueprintCallable)
	void SetForceDisableSkillChecks(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetFirstPersonVfxsVisibility(bool isFirstPerson);

	UFUNCTION(BlueprintCallable)
	void SetFirstPersonModelEnabled(bool enabled, bool force);

	UFUNCTION(BlueprintCallable)
	void SetFeetOnGround(bool feetOnGround);

	UFUNCTION(BlueprintCallable)
	void SetDetectionZoneEnabled(EDetectionZone detectionZoneID, bool enabled);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAnimationCrouchState(bool crouched);

public:
	UFUNCTION(BlueprintCallable)
	void SetAllowNavigation(bool enable);

	UFUNCTION(BlueprintCallable)
	void SetAllDetectionZonesEnabled(bool enabled);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_UpdateScreenAspectRatio(const float value);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendSecondaryActionPressed(bool fromCancelRequest);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendItemUseInput(bool pressed, bool requestItemUse);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendItemDropInput(bool pressed);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendInteractionInput(bool pressed);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendFastInteractionInput(bool pressed);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendEventAbilityInput(bool pressed);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendAbilityTwoInput(bool pressed);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SendAbilityInput(bool pressed);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_GameTimeSync();

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_DebugSetCustomization(const FEquippedPlayerCustomization& customization);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Broadcast_DebugPlayMontage(FAnimationMontageDescriptor animMontageID, float playRate);

public:
	UFUNCTION(BlueprintCallable)
	void ResetPitchScale(float adjustTime);

	UFUNCTION(BlueprintCallable)
	void ResetCamera();

	UFUNCTION(BlueprintCallable)
	void RemoveStatusEffect(UStatusEffect* statusEffect);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_Interactable();

	UFUNCTION(BlueprintCallable)
	void OnRep_DreamworldComponent();

private:
	UFUNCTION(BlueprintCallable)
	void OnPostProcessInput();

public:
	UFUNCTION(BlueprintCallable)
	void OnPickupStart(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable)
	void OnPickupEnd(ADBDPlayer* target);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLocallyObservedChanged();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompletedNative();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIntroCompleted();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInterruptedStart();

	UFUNCTION(BlueprintCallable)
	void OnHudVisibilityChangedNative(const bool isVisible);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHudVisibilityChanged(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FString OnGetCharacterName() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnEscapeDoorActivated();

private:
	UFUNCTION(BlueprintCallable)
	void OnControllerChanged(APawn* pawn, AController* oldController, AController* newController);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnClientRestart();

protected:
	UFUNCTION(BlueprintCallable)
	void OnBlindChargeEmptied();

public:
	UFUNCTION(BlueprintCallable)
	void OnAllPlayerLoaded();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetRunVaultEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetReverseTraverseEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetInteractingPlayer(ADBDPlayer* interactingPlayer);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetForceAuthoritativeMovement(bool value);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetEnableCapsuleDynamicResize(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetDebugSnapPoint(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetDebugPrintAvailableInteractions(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetDebugCarry(bool enabled);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetCustomization(const FEquippedPlayerCustomization& customization);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetContinuousPrintDebug(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetAuthoritativeMovement(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ServerResetMeshRelativeOffSet();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ReplicateController(AController* newController);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_LeaveGame(FGuid uniqueLeavingPlayerId);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Debug_SetMaxWalkSpeed(float maxWalkSpeed);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ConfirmItemDrop(bool pressed);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Broadcast_DebugPlayMontage(FAnimationMontageDescriptor animMontageID, float playRate);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Local_NotifyMatchEnded();

	UFUNCTION(BlueprintPure)
	bool Local_IsInteractionInputPressed(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintCallable)
	bool K2_SetActorLocationByBottomCapsule(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult);

	UFUNCTION(BlueprintCallable)
	void ItemUseReleased();

	UFUNCTION(BlueprintCallable)
	void ItemUsePressed();

	UFUNCTION(BlueprintPure)
	bool IsRunning() const;

	UFUNCTION(BlueprintPure)
	bool IsMoving() const;

	UFUNCTION(BlueprintPure)
	bool IsLocallyObserved() const;

	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadius() const;

	UFUNCTION(BlueprintPure)
	bool IsInteractionInputPressed(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	bool IsInStalkMode() const;

	UFUNCTION(BlueprintPure)
	bool IsInsideCloset() const;

	UFUNCTION(BlueprintPure)
	bool IsInParadise() const;

	UFUNCTION(BlueprintPure)
	bool IsInMeathookZone() const;

	UFUNCTION(BlueprintPure)
	bool IsIncapacitated() const;

	UFUNCTION(BlueprintPure)
	bool IsHeadHidden() const;

	UFUNCTION(BlueprintPure)
	bool IsExhausted() const;

	UFUNCTION(BlueprintPure)
	bool IsCrouchPressed() const;

	UFUNCTION(BlueprintPure)
	bool IsCrouching() const;

	UFUNCTION(BlueprintPure)
	bool IsCloaked() const;

	UFUNCTION(BlueprintPure)
	bool IsBeingInterrupted() const;

	UFUNCTION(BlueprintPure)
	bool IsAllowedNavigation() const;

	UFUNCTION(BlueprintCallable)
	void InteractionInputReleased();

	UFUNCTION(BlueprintCallable)
	void InteractionInputPressed();

	UFUNCTION(BlueprintPure)
	bool HasMoveInput() const;

	UFUNCTION(BlueprintPure)
	bool HasDamageImmunity() const;

	UFUNCTION(BlueprintPure)
	bool HasClearPathToTargetWithIgnore(FVector targetPosition, const TArray<AActor*>& ignoreActors) const;

	UFUNCTION(BlueprintPure)
	bool HasClearPathToTargetWithFilter(FVector targetPosition, TSubclassOf<AActor> classFilter, AActor* ignoreActor) const;

	UFUNCTION(BlueprintPure)
	bool HasClearPathToTarget(FVector targetPosition) const;

	UFUNCTION(BlueprintPure)
	float GetTunableValue(FName key, float defaultValue, bool warnIfRowMissing) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	ADBDPlayerController* GetSharedPlayerController() const;

	UFUNCTION(BlueprintPure)
	bool GetRunVaultEnabled() const;

	UFUNCTION(BlueprintPure)
	bool GetReverseTraverseEnabled() const;

	UFUNCTION(BlueprintPure)
	FRotator GetRepControlRotation() const;

	UFUNCTION(BlueprintPure)
	EPlayerTeam GetPlayerTeam() const;

	UFUNCTION(BlueprintPure)
	EPlayerRole GetPlayerRole() const;

	UFUNCTION(BlueprintPure)
	UPlayerInteractionHandler* GetPlayerInteractionHandler() const;

	UFUNCTION(BlueprintPure)
	FRotator GetPlayerDirection() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayerController* GetPlayerController() const;

	UFUNCTION(BlueprintPure)
	UCameraComponent* GetPlayerCamera() const;

	UFUNCTION(BlueprintPure)
	UPerkManager* GetPerkManager() const;

	UFUNCTION(BlueprintPure)
	float GetPercentMovementSpeed() const;

	UFUNCTION(BlueprintPure)
	EPawnType GetPawnType() const;

	UFUNCTION(BlueprintPure)
	UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler() const;

	UFUNCTION(BlueprintPure)
	UGameplayTagContainerComponent* GetObjectState() const;

	UFUNCTION(BlueprintPure)
	UNavigationStateComponent* GetNavigationState() const;

	UFUNCTION(BlueprintPure)
	FString GetNameDebugString() const;

	UFUNCTION(BlueprintPure)
	float GetMaxSpeed() const;

	UFUNCTION(BlueprintPure)
	float GetLuck() const;

	UFUNCTION(BlueprintPure)
	TArray<UItemModifier*> GetItemModifiers() const;

	UFUNCTION(BlueprintPure)
	TArray<UItemAddon*> GetItemAddons() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInterrupting() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInteracting() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInFirstPerson() const;

	UFUNCTION(BlueprintCallable)
	FInteractionPlayerProperties GetInteractionPlayerProperties();

	UFUNCTION(BlueprintPure)
	UInteractionDetectorComponent* GetInteractionDetectorComponent() const;

	UFUNCTION(BlueprintPure)
	AInteractable* GetInteractable() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetGrassEffectRadiusMultiplier() const;

	UFUNCTION(BlueprintPure)
	UActorComponent* GetFirstComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const;

	UFUNCTION(BlueprintPure)
	FVector GetFeetPosition() const;

	UFUNCTION(BlueprintPure)
	UCharacterDreamworldComponent* GetDreamworldComponent() const;

	UFUNCTION(BlueprintPure)
	UPrimitiveComponent* GetDetectionZone(EDetectionZone detectionZoneID) const;

	UFUNCTION(BlueprintPure)
	ADBDPlayerState* GetDBDPlayerState() const;

	UFUNCTION(BlueprintPure)
	EInteractionAnimation GetCurrentInteractionAnimation() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteraction() const;

	UFUNCTION(BlueprintPure)
	UChaseComponent* GetChaseComponent() const;

	UFUNCTION(BlueprintPure)
	UCharacterInventoryComponent* GetCharacterInventoryComponent() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayerCameraManager* GetCameraManager() const;

	UFUNCTION(BlueprintPure)
	FVector GetBoneLocation(FName name, TEnumAsByte<EBoneSpaces::Type> space) const;

	UFUNCTION(BlueprintPure)
	UBlindableComponent* GetBlindableComponent() const;

	UFUNCTION(BlueprintPure)
	FVector GetAverageVelocity() const;

	UFUNCTION(BlueprintPure)
	UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	USceneComponent* GetAttachPoint(FName attachPointName) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	APlayerState* GetAssociatedPlayerState() const;

	UFUNCTION(BlueprintPure)
	FVector GetActorLocationFromFeetLocation(const FVector FeetLocation) const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* FindClosestSlashablePlayerInDetectionZone(EDetectionZone detectionZoneID) const;

	UFUNCTION(BlueprintCallable)
	void FastInteractionInputReleased();

	UFUNCTION(BlueprintCallable)
	void FastInteractionInputPressed();

	UFUNCTION(BlueprintCallable)
	void EventAbilityInputReleased();

	UFUNCTION(BlueprintCallable)
	void EventAbilityInputPressed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Dissolve(bool dissolve);

	UFUNCTION(BlueprintCallable)
	void DetachInteractor();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DBDUnCrouch();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DBDCrouch();

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ToggleForceAuthoritativeMovement();

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ToggleDebugInteractionInZone();

protected:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetMouseTurnSpeedMultiplier(float value);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetMouseLookUpSpeedMultiplier(float value);

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DebugStartInteraction();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_CancelInteraction() const;

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_TryInteractionType(EInputInteractionType interactionType, ADBDPlayer* requester);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_TryInteraction(UInteractionDefinition* interaction, ADBDPlayer* requester, bool force, bool usingInputPersistence);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SendCancelInteraction(const UInteractionDefinition* interactionDefinition);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Debug_PlayerStartSnapping(const FVector& location, const float duration);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanInterrupt_BP() const;

public:
	UFUNCTION(BlueprintCallable)
	void CancelCarry(bool alsoCancelForOtherPlayer);

	UFUNCTION(BlueprintCallable)
	void CameraUpdated();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetDreamworldComponent(UCharacterDreamworldComponent* component);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RequestStun(EStunType stunType, ADBDPlayer* stunner);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeStatusEffect_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_EvaluateIfPlayerCanSee() const;

public:
	UFUNCTION(BlueprintCallable)
	void AttachInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintCallable)
	void AddDetectionZone(EDetectionZone detectionZoneID, UPrimitiveComponent* zone);

	UFUNCTION(BlueprintCallable)
	void AbilityTwoInputReleased();

	UFUNCTION(BlueprintCallable)
	void AbilityTwoInputPressed();

	UFUNCTION(BlueprintCallable)
	void AbilityInputReleased();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayer) { return 0; }
