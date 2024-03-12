#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationMontageDescriptor.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "AIPointOfInterestTargetInterface.h"
#include "CharmAttachable.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "MeatHook.generated.h"

class UMontagePlayer;
class UAIPerceptionStimuliSourceComponent;
class UInteractor;
class UChargeableComponent;
class ACamperPlayer;
class USceneComponent;
class ADBDPlayer;
class AEntity;
class UCharacterPusherComponent;
class UPollableEventListener;
class UDBDClipRegionComponent;
class UCapsuleComponent;
class UCurveFloat;
class UChargeableInteractionDefinition;
class UMapActorComponent;
class ACharacter;
class UAkComponent;
class UBoxComponent;
class UPrimitiveComponent;
class UHookableComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AMeatHook : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WasSurvivorStruggleCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSacrificeEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AIInteractionOffset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UDBDClipRegionComponent*> ClipRegions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSurvivorStruggling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInBasement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsBreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSabotageable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanBeScourgeHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag HookIdentityTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SnapHookedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FullyHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _struggleThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCharacterPusherComponent* _characterPusher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCapsuleComponent* _slasherCollisionBlocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCapsuleComponent* _conditionalSlasherCollisionBlocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _conditionalSlasherCollisionBlockerPresenceTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _antiCampUnhookChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxSecondsToChargeAntiCampUnhook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _antiCampUnhookXYDistanceToChargeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _antiCampUnhookUpperZDistanceToChargeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _antiCampUnhookLowerZDistanceToChargeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _stateTagsToApplyOnBeginPlay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPollableEventListener* _eventListener;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _hookedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _hookBreakerPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ACamperPlayer*> _campersThatSabotagedMeatHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _mainInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableInteractionDefinition* _unhook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _camperHookedSnapTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AEntity* _entity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _interactingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _cachedMapActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _antiCampGracePeriod;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateSlasherBlockerCollision();

public:
	UFUNCTION(BlueprintCallable)
	void SetMapActor(UMapActorComponent* value);

	UFUNCTION(BlueprintCallable)
	void SetIsBeingSabotaged(bool isBeingSabotaged);

	UFUNCTION(BlueprintCallable)
	void SetInteractingPlayer(ADBDPlayer* interactingPlayer);

protected:
	UFUNCTION(BlueprintCallable)
	void SetEntity(AEntity* entity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTickStruggle(float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnStruggleSkillCheckFailed_Cosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStruggleExit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStruggleEnter();

private:
	UFUNCTION(BlueprintCallable)
	void OnStopPushingPlayer(ACharacter* character);

	UFUNCTION(BlueprintCallable)
	void OnStartPushingPlayer(ACharacter* character);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSacrificeOut();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSacrificeIn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReactionIn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReaction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnOwnerReplicated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookingExit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookingEnter();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookedSurvivorChanged(ACamperPlayer* before, ACamperPlayer* after);

	UFUNCTION(BlueprintCallable)
	void OnHookedSurvivorAttacked();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookedIdle();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookedExit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHookedEnter();

private:
	UFUNCTION(BlueprintCallable)
	void OnEscapeDoorActivated();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAutoRepair();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetIsSacrificed(bool isSacrificed);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetIsSabotaged(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetIsBrokenFromUnhook(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetHookedSurvivor(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RefreshCharmCustomization();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EscapeAttemptResult(ADBDPlayer* player, bool result);

private:
	UFUNCTION(BlueprintCallable)
	void Local_OnHookedSurvivorDrainStageChanged(const int32 drainStage, ADBDPlayer* target) const;

public:
	UFUNCTION(BlueprintCallable)
	void Local_MoveSurvivorToHook(ACamperPlayer* survivor, const float duration);

	UFUNCTION(BlueprintPure)
	FAnimationMontageDescriptor GetUnhookOutMontageDescriptor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetUnhookInteraction() const;

	UFUNCTION(BlueprintPure)
	FAnimationMontageDescriptor GetUnhookInMontageDescriptor() const;

	UFUNCTION(BlueprintPure)
	float GetStruggleThreshold() const;

	UFUNCTION(BlueprintPure)
	float GetStrugglePercent() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetSaboteurPlayer() const;

	UFUNCTION(BlueprintPure)
	float GetSabotageHookRespawnDuration() const;

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetMeatHookAkAudioComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UInteractor* GetMainInteractor() const;

	UFUNCTION(BlueprintPure)
	bool GetIsSacrificed() const;

	UFUNCTION(BlueprintPure)
	bool GetIsSabotaged() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInBasement() const;

	UFUNCTION(BlueprintPure)
	bool GetIsBroken() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UBoxComponent* GetInteractorZoneComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetInteractingPlayer() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	FVector GetHookPosition() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetHookedSurvivor() const;

	UFUNCTION(BlueprintPure)
	UHookableComponent* GetHookableComponentOfHookedActor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetEscapeHookInteraction() const;

	UFUNCTION(BlueprintPure)
	UCharacterPusherComponent* GetCharacterPusher() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetCamperUnkookFocalPointTransform() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	USceneComponent* GetCamperHookedSnapTransform() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxXYCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxUpperZCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxLowerZCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampGracePeriod() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetAntiCampEscapeHookInteraction() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintImplementableEvent)
	void FireHookSoundEvent(const FName NoiseRangeTunable, const ADBDPlayer* soundInstigator) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void DebugHookedSurvivor(ACamperPlayer* expectedSurvivor) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetAsScourgeHookStart();

public:
	UFUNCTION(BlueprintPure)
	bool CanUnhookSurvivor(const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanSurvivorStruggle(ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanSurvivorAttemptEscape(const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanHookSurvivor() const;

	UFUNCTION(BlueprintPure)
	bool CanBeSabotaged() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void BroadcastUnhook(ADBDPlayer* rescuer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnHookInteractionStarted();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingEnter();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingCharged();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingAborted();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalSurvivorAttemptingEscapeAborted();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalSurvivorAttemptingEscape();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsSacrificed(bool isSacrificed);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsSabotaged(bool isSabotaged, ADBDPlayer* saboteur, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsBrokenFromUnhook(bool isBrokenFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);

	UFUNCTION(BlueprintCallable)
	void Authority_SetHookedSurvivor(ACamperPlayer* survivor);

public:
	AMeatHook();
};

FORCEINLINE uint32 GetTypeHash(const AMeatHook) { return 0; }
