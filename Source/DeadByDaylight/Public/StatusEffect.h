#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/EngineTypes.h"
#include "EStatusEffectType.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "GameplayNotificationData.h"
#include "StatusEffectInitializationData.h"
#include "StatusEffect.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStatusEffect : public UGameplayModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ModifierData)
	FGameplayModifierData ModifierData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ShouldDisplay)
	bool ShouldDisplay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float CustomParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _removeOnRemainingLifetimeEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastAsStatusEffectWhenApplicable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastAsStatusEffectByActivationTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastAsStatusEffectWhenLifeRemains;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastAsStatusEffectByFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastAsStatusEffectAlways;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool BroadcastOriginatorGameEventNotificationWhenFirstApplicable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldHideStatusEffectIconForOriginatingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _forceActivationTimerDisplay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_StatusInitializationData, Transient, meta=(AllowPrivateAccess=true))
	FStatusEffectInitializationData _statusInitializationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSoftClassPtr<UStatusEffect>> _nonStackingEffects;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool ShouldDisplayStatusEffectIcon() const;

public:
	UFUNCTION(BlueprintCallable)
	void SetStatusEffectIconPercentage(float value);

	UFUNCTION(BlueprintCallable)
	void SetShouldDisplay(bool on);

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnShouldOriginatingPlayerChange();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnShouldDisplayChanged(bool currentValue);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_StatusInitializationData();

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_ShouldOriginatingPlayerChange();

	UFUNCTION(BlueprintCallable)
	void OnRep_ShouldDisplay();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetRemainingLifetimeInitialized(bool remainingLifetimeInitialized);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetRemainingLifetime(float lifetime);

public:
	UFUNCTION(BlueprintPure)
	bool IsOriginatorHooked() const;

	UFUNCTION(BlueprintPure)
	bool IsOriginatorAlive() const;

	UFUNCTION(BlueprintPure)
	bool IsKillerInOriginatorRange(float AdditiveRangeModifier) const;

	UFUNCTION(BlueprintPure)
	bool IsInOriginatorRange() const;

	UFUNCTION(BlueprintCallable)
	void InitializeLifetime(float lifetime);

	UFUNCTION(BlueprintPure)
	EStatusEffectType GetStatusEffectType() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetStatusEffectCooldownRate() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool GetShouldDisplay() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOriginatingPlayer() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetLifetimeDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetCustomParam() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void FireActiveStatusEffectEvent(float percentage, int32 levelToDisplay) const;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOriginatorGameEventNotification();

	UFUNCTION(BlueprintCallable)
	void BroadcastGameEventNotification(FGameplayNotificationData notificationData, bool addToHistory);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetRemainingLifetime(float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveSelf();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnOriginatingPlayerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintAuthorityOnly)
	void Authority_EndSelf();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffect) { return 0; }
