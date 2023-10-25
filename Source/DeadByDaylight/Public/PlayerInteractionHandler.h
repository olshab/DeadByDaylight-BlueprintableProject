#pragma once

#include "CoreMinimal.h"
#include "OnSecondaryActionDone.h"
#include "AvailableInteractionCalculator.h"
#include "OnDeactivateSkillCheck.h"
#include "InteractionPerformer.h"
#include "OnCurrentInteractionChangedBP.h"
#include "StoredInteraction.h"
#include "Components/ActorComponent.h"
#include "EInteractionLayer.h"
#include "EInputInteractionType.h"
#include "ESkillCheckCustomType.h"
#include "GameplayTagContainer.h"
#include "ERequestState.h"
#include "Engine/EngineTypes.h"
#include "EInteractionValidationState.h"
#include "PlayerInteractionHandler.generated.h"

class UInteractionDefinition;
class UObject;
class USkillCheck;
class ADBDPlayer;
class UInterruptionDefinition;
class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerInteractionHandler : public UActorComponent, public IInteractionPerformer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PriorityConeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BotPriorityConeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSecondaryActionDone Authority_SecondaryActionDoneDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCurrentInteractionChangedBP NewInteractionRequestedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCurrentInteractionChangedBP ServerValidatedInteractionStartedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCurrentInteractionChangedBP ServerValidatedInteractionEndedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionLayer InteractionLayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnDeactivateSkillCheck OnDeactivateSkillCheckDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _hasInteractionRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _hasInteractionRequestInBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _interactionToSwapTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _currentInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _currentPlayerDependencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EInputInteractionType _currentInteractionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkillCheck* _skillCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<float> _progressBasedSkillChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _requestedInterruptionOtherParty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInterruptionDefinition* _requestedInterruptionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _requestedInterruptionIsInterruptor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _currentInterruptionOtherParty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInterruptionDefinition* _currentInterruptionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _currentInterruptionIsInterruptor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _interactionInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _interactionsInZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAvailableInteractionCalculator _availableInteractionCalculator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FGameplayTagContainer> _disableInteractionSourcesToExceptions;

public:
	UFUNCTION(BlueprintCallable)
	void SetScanForInteractionsEnabled(bool enabled);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetInteractionToSwapTo(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestInterruption_Interruptor();

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Cheat_SetInteractionScanInterval(float interval);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_CancelCurrentInteractionByInput();

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Broadcast_StoreInteraction(FStoredInteraction interactionToStore);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Broadcast_ConfirmChargedCompleted(bool chargeComplete);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_AnswerInterruption_Interruptee(ERequestState state);

public:
	UFUNCTION(BlueprintCallable)
	void ResetSuccessiveSkillCheckCount();

	UFUNCTION(BlueprintCallable)
	void RemoveInteraction(UInteractionDefinition* interaction);

private:
	UFUNCTION(BlueprintCallable)
	void OnAttachedInteractorOwnerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintPure)
	int32 NumInteractionsInZone() const;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StoreInterruption_Interruptor(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StoreInteraction(FStoredInteraction interactionToStore);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetInteractionToSwapTo(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RequestInterruption_Interruptee(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InterruptionRequestResult_Interruptor(ERequestState state, bool grantInterruptScore);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InteractionPredictionValidationResult(UInteractionDefinition* interaction, EInteractionValidationState state);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CancelCurrentInteractionByInput();

	UFUNCTION(BlueprintCallable)
	void IncrementSuccessiveSkillCheckCount();

	UFUNCTION(BlueprintCallable)
	bool HasAvailableInteraction(EInputInteractionType interactionType);

	UFUNCTION(BlueprintPure)
	bool HasActiveSkillCheck() const;

	UFUNCTION(BlueprintPure)
	USkillCheck* GetSkillCheck() const;

	UFUNCTION(BlueprintPure)
	float GetMultiplicativeSkillCheckProbabilityModifier() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteractionOfType(EInputInteractionType interactionInputType) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteraction() const;

	UFUNCTION(BlueprintPure)
	void GetAvailableInteractions(TArray<UInteractionDefinition*>& result) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetAvailableInteractionByID(const FString& interactionID) const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetAvailableInteraction(EInputInteractionType interactionType) const;

	UFUNCTION(BlueprintPure)
	float GetAdditiveSkillCheckProbabilityModifier() const;

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_StopSkillCheck();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_NotifyChargeCompleted(const UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Cheat_SetInteractionScanInterval(float interval);

	UFUNCTION(BlueprintCallable)
	void CleanInteractionArray(AActor* destroyedActor);

	UFUNCTION(BlueprintPure)
	bool CanPerformInteraction(const FString& interactionName) const;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Broadcast_Multicast_ConfirmChargedCompleted(bool chargeComplete);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_UnPauseSkillCheckTimer();

	UFUNCTION(BlueprintCallable)
	void Authority_TriggerCustomSkillCheck(const ESkillCheckCustomType type, float warningSoundDelay);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_PauseSkillCheckTimer();

	UFUNCTION(BlueprintCallable)
	void Authority_ClearPlayerDependency(ADBDPlayer* playerDependency);

	UFUNCTION(BlueprintCallable)
	void Authority_ClearPlayerDependencies();

	UFUNCTION(BlueprintCallable)
	void AddInteraction(UInteractionDefinition* interaction);

public:
	UPlayerInteractionHandler();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerInteractionHandler) { return 0; }
