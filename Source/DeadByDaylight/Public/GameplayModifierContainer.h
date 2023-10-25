#pragma once

#include "CoreMinimal.h"
#include "BaseModifierContainer.h"
#include "StatusViewSource.h"
#include "ModifierTickableConditionReplicatedData.h"
#include "EInventoryItemType.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayModifierContainer.generated.h"

class UBaseModifierCondition;
class UTimerObject;
class ADBDPlayer;
class UGameplayModifierContainer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplayModifierContainer : public UBaseModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TickableConditionsData, Transient)
	FModifierTickableConditionReplicatedData _tickableConditionsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> _tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseApplyFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastStatusView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StatusViewID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _autoInitializeOnBeginPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _canOptimizeTickActivation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ActivationTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _activationTimer;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateIsApplicable();

protected:
	UFUNCTION(BlueprintCallable)
	void UnlistenToDispatcherGameEvent(FGameplayTag eventType);

	UFUNCTION(BlueprintCallable)
	void UnlistenToAllDispatcherGameEvents();

public:
	UFUNCTION(BlueprintCallable)
	void SetUseApplyFunction(bool use);

	UFUNCTION(BlueprintCallable)
	void SetModifierValue(FGameplayTag type, float GameplayModifierValue);

	UFUNCTION(BlueprintCallable)
	void SetFlag(FGameplayTag flag, bool flagValue);

	UFUNCTION(BlueprintCallable)
	void RemoveModifier(FGameplayTag type);

	UFUNCTION(BlueprintCallable)
	void RemoveAllModifiers();

	UFUNCTION(BlueprintCallable)
	void RemoveAllFlags();

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_TickableConditionsData();

	UFUNCTION(BlueprintCallable)
	void OnRep_ModifierData();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ActivationTimer();

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintCallable)
	void OnInitialized_Internal();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnInitialized();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnGameEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnApplyEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnApplyBegin();

protected:
	UFUNCTION(BlueprintCallable)
	void ListenToDispatcherGameEvent(FGameplayTag eventType);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsStatusViewActive() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsActivationTimerDone() const;

	UFUNCTION(BlueprintPure)
	bool IsActivationTimerActive() const;

	UFUNCTION(BlueprintPure)
	bool HasModifierOfType(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	bool HasFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetRemainingLifetime() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetPercentageFill() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UGameplayModifierContainer* GetOriginatingEffect() const;

	UFUNCTION(BlueprintPure)
	float GetModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	int32 GetLevelToDisplay() const;

	UFUNCTION(BlueprintPure)
	EInventoryItemType GetInventoryItemType() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetIconFilePathIndex() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerPercentRemaining() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerElapsedTimePercent() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerElapsedTime() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimerDuration() const;

protected:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void FireActiveStatusViewEvent(FName statusViewIDNew, FName uniqueSourceID, const FStatusViewSource statusViewSource) const;

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerActivationTimer(float activationTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetActivationTimerPaused(const bool paused);

	UFUNCTION(BlueprintCallable)
	void Authority_InstantiateGameplayModifierConditions();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ClearActivationTimer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Apply(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	UBaseModifierCondition* AddCondition(TSubclassOf<UBaseModifierCondition> conditionType);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGameplayModifierContainer();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierContainer) { return 0; }
