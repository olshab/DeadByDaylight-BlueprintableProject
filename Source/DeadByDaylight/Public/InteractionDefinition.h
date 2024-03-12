#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Activatable.h"
#include "EInteractionAnimation.h"
#include "MontagePlaybackDefinition.h"
#include "GameplayTagContainer.h"
#include "ESnapBackType.h"
#include "Interaction.h"
#include "Components/SceneComponent.h"
#include "ESnapBackPositionType.h"
#include "EInputInteractionType.h"
#include "EInteractionOwnership.h"
#include "SecondaryInteractionProperties.h"
#include "AnimationMontageDescriptor.h"
#include "ActivationDefinition.h"
#include "EInteractionComparisonPriority.h"
#include "InteractionDefinition.generated.h"

class UInteractionDefinition;
class UInterruptionDefinition;
class UObject;
class ADBDPlayer;
class UCurveFloat;
class UInteractor;
class UPrimitiveComponent;
class UPlayerInteractionHandler;
class AInteractable;
class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractionDefinition : public USceneComponent, public IActivatable, public IInteraction
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionInterruptedDelegate);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionFinishedDelegate);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionEnteredDelegate, ADBDPlayer*, player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResetCameraDuringSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteractionCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowStartInteractionFromHeldInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnMontageComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnMontageBlendingOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnTimerExpire;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnHeightDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopEnterMontageOnExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopUpdateMontageOnExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreStrafeAnimFix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation InteractionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CamperCanInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SlasherCanInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowInputPersistence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapStopDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestClearPathDuringSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MustBeClosestPlayerToSnapPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CheckInteractableIsInPlayerView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckInteractableInViewSphereSweepRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CheckInteractableInViewOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckInteractableInViewOffsetDistanceToHitPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInterruptibleIfTestClearPathDuringSnapFails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestPlayerOrientationOnSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleEnterAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleMainAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleExitAnimationToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESnapBackType SnapBackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESnapBackPositionType SnapBackPositionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D SnapBackPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapToInitialRotationDuringSnapBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseStartSnapTimeForSnapExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileIncapacitated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileCloaked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileChainLinked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileShocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileUnhookingSelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanInteractWhileCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowNavigationInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseCameraMontageMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OwnerBlocksAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHighPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowOverridingWhenNotForced;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreOverlapOnInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseAuthoritativeMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeAuthoritativePushedDuringExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanAuthoritativePush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ContinueCachingLastSafeItemDropLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoBindToParentInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoBindToParentZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CancelOnMoveInitialDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CancelOnMoveInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CancelOnMoveInputOnlyWhenRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ProgressBasedSkillChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AffectsStillness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConsideredIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BlockSelfInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType InteractionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NoInputInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnInputRelease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowHitMontageWhenInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowBasicInteractionIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UInterruptionDefinition*> _interruptionDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionEnteredDelegate OnInteractionEnteredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionFinishedDelegate OnInteractionFinishedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedStartDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedStartedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FInteractionInterruptedDelegate OnInteractionInterruptedEndDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DebugUnavailability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType SecondaryActionInputType;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurveEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* NavigationSpeedCurveExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldCheckInteractedUpon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionOwnership OwnershipUsability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExitInteractionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ApplyModifiersToExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InteractionDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InteractionCanBeToggled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOverridingInputToggleReleasePromptMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InputToggleReleasePromptMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreSprintToCancelSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForceWithSprintToCancelSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractionHeightDeltaMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor EnterMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor UpdateMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimationMontageDescriptor ExitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EnterMontageVariantCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> UpdateMontageVariantCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> ExitMontageVariantCycle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SnapSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canBeAttachedToAnyZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInterruptibleBySacrifice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreStun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag _objectStateTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FSecondaryInteractionProperties> _secondaryInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useHoldPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowInteractionInNarrowSpaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowIKSensorDuringInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideSlashableRelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _slashableRelativeLocation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _startUpdateMontageDuringEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _mutuallyExclusiveInteractionsClient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FActivationDefinition _activationDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _zone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInputInteractionType _cancelInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _preventingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _disablingTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UPlayerInteractionHandler*> _evaluatingInteractionHandlers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties DEPRECATED_SecondaryInteractionProperties;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSlashableLocation(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool ShouldStartUpdateMontageDuringEnter(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable)
	void SetSecondaryActionInputType(EInputInteractionType inputType);

	UFUNCTION(BlueprintCallable)
	void ResetSlashableLocation(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void RemoveExclusiveInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void RemoveDisablingTags(FGameplayTag tagToRemove);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUpdateMontageStart(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInterruptorUpdateStart(UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptor, ADBDPlayer* interruptee);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionUpdateTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionUpdateStart(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionUpdateMontageReachedMiddle(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionUpdateEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionInterruptStarted(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionInterruptStart(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionInterruptEnd(ADBDPlayer* player, UInterruptionDefinition* currentInterruption, ADBDPlayer* interruptingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionInit(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionFinished(ADBDPlayer* player, bool hasInteractionStarted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionExitTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionExitStart(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionExitEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionEnterTick(ADBDPlayer* player, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionEnterStart(ADBDPlayer* player, float actualSnapTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionEnterEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionCancelled(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionAnimNotifyEvent(FName notifyID, ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool IsSupportedCharacterType(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInterruptionDefinition* interruption) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInteractionUsingOffering(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInteractionPossibleClient(const ADBDPlayer* player, EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsInteractionPossibleBP(const ADBDPlayer* player, EInputInteractionType interactionType) const;

public:
	UFUNCTION(BlueprintPure)
	bool IsInteractionPossible(const ADBDPlayer* player, EInputInteractionType interactionType, bool performClientCheck, bool performHeightCheck, bool isBotPredictionCheck) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsInteractionDone(const ADBDPlayer* player, EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	bool IsInteractableInPlayerView(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsInputPressed(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsCharacterFacingInteractorDirection(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsCancelable(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetUpdateMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetUpdateAnimationPlayRate(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetUpdateAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure)
	float GetSnapTimeAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSnapTime(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FName GetSnapSocketName(const ADBDPlayer* player) const;

public:
	UFUNCTION(BlueprintPure)
	FVector GetSnapPointPositionAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetSnapPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetSnapDistanceAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSnapDistance(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetSlashableRelativeLocation() const;

	UFUNCTION(BlueprintPure)
	EInputInteractionType GetSecondaryActionInputType(const UObject* worldContextObject) const;

	UFUNCTION(BlueprintPure)
	FRotator GetRotationToSnapPointAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FRotator GetRotationToSnapPoint(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	ADBDPlayer* GetPlayerDependency(const ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintPure)
	TArray<UInterruptionDefinition*> GetInterruptionDefinitions() const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetInteractor() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetInteractionTimeMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetInteractionTime(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FString GetInteractionText(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetInteractionExitTime(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	FText GetInteractionDescriptionText() const;

	UFUNCTION(BlueprintPure)
	AInteractable* GetInteractable() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetFocalPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetExitMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetExitAnimationPlayRate(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetExitAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetEnterMontage(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FMontagePlaybackDefinition GetEnterAnimationPlayBackDefinition(const ADBDPlayer* player, bool follower) const;

	UFUNCTION(BlueprintPure)
	float GetChargePercent() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool GetAllowNavigation(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FVector GetActualSnapPointPositionAtStart(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	FVector GetActualSnapPointPosition(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TArray<AActor*> GetActorsToIgnoreOverlap() const;

	UFUNCTION(BlueprintPure)
	float GetActorHeightDelta(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	bool DoesPlayerHaveClearPath(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void CompleteCharge(ADBDPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	EInteractionComparisonPriority ComparePriorityToInteraction(const UInteractionDefinition* interaction) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool CanOverrideInteraction(const UInteractionDefinition* interaction) const;

	UFUNCTION(BlueprintPure)
	float CalculateSnapTimeForConstantSpeed(const ADBDPlayer* player, const float speed) const;

	UFUNCTION(BlueprintPure)
	float CalculateSnapTimeForConstantMaxNormalMovementSpeed(const ADBDPlayer* player, float speedBoost) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnInteractionAuthorized(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable)
	void AttachToZone(UPrimitiveComponent* zone);

	UFUNCTION(BlueprintCallable)
	void AttachToInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintCallable)
	void AddMutuallyExclusiveInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void AddDisablingTags(FGameplayTag tagToAdd);

public:
	UInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionDefinition) { return 0; }
