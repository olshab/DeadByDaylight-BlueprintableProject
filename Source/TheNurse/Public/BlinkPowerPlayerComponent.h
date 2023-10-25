#pragma once

#include "CoreMinimal.h"
#include "BlinkPowerSetupParams.h"
#include "EBlinkPowerState.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "EAttackType.h"
#include "BlinkPowerPlayerComponent.generated.h"

class UTimerObject;
class UCurveFloat;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxBlinkCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _rechargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainBlinkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _allowedInteractionSemancticsDuringChainBlink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _fatigueDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _fatigueChainBlinkPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _fatigueAttackPenalty;

	UPROPERTY(EditAnywhere)
	FGameplayTag _fatigueAttackMissPenaltyModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _fatigueSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlinkState, meta=(AllowPrivateAccess=true))
	EBlinkPowerState _powerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlinkCharges, meta=(AllowPrivateAccess=true))
	int32 _blinkCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _wasCurrentChargeSetByRecharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _chainBlinkTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _rechargeTimer;

public:
	UFUNCTION(BlueprintCallable)
	void Setup(const FBlinkPowerSetupParams& params);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_TriggerCooldown(float duration);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_TriggerChainBlink(int32 remainingBlinkCharges, float blinkTimeStamp);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetState(EBlinkPowerState state);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_InterruptDuringChainBlink(AActor* interruptedPlayer);

	UFUNCTION(BlueprintCallable)
	void OnRep_BlinkState(EBlinkPowerState oldState);

	UFUNCTION(BlueprintCallable)
	void OnRep_BlinkCharges();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnAttackStarted(const EAttackType attackType);

	UFUNCTION(BlueprintCallable)
	void OnAttackFinished(const EAttackType attackType);

public:
	UFUNCTION(BlueprintPure)
	bool IsChargingBlink() const;

	UFUNCTION(BlueprintPure)
	bool IsChargeFull() const;

	UFUNCTION(BlueprintPure)
	bool IsBlinking() const;

	UFUNCTION(BlueprintPure)
	float GetRechargeProgressPercent() const;

	UFUNCTION(BlueprintPure)
	EBlinkPowerState GetPowerState() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownTimerDuration() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownProgressPercent() const;

	UFUNCTION(BlueprintPure)
	float GetChainBlinkTimerDuration() const;

	UFUNCTION(BlueprintPure)
	float GetChainBlinkRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetChainBlinkProgressPercent() const;

	UFUNCTION(BlueprintPure)
	int32 GetBlinkCharges() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlinkPowerPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPowerPlayerComponent) { return 0; }
