#pragma once

#include "CoreMinimal.h"
#include "ChargeableCompletionStateChangeDelegate.h"
#include "ChargeApplied.h"
#include "Components/ActorComponent.h"
#include "ChargeableEmptiedDelegate.h"
#include "DechargeBegin.h"
#include "ChargeableCompletionPercentChangeDelegate.h"
#include "ChargeableSkillCheckResponse.h"
#include "ChargeableCompletionPercentChangeCosmeticDelegate.h"
#include "DechargeEnd.h"
#include "SpeedBasedNetSyncedValue.h"
#include "DBDTimer.h"
#include "ChargeData.h"
#include "ChargeableComponent.generated.h"

class UChargeStrategy;
class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableEmptiedDelegate OnInteractionEmptiedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableCompletionStateChangeDelegate OnInteractionCompletionStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableSkillCheckResponse SkillCheckResponseAestheticDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableSkillCheckResponse SkillCheckResponseAuthorityDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Transient)
	FChargeApplied ChargeAppliedAuthorityDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableCompletionPercentChangeDelegate ChargeableCompletionPercentChangeAuthorityDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableCompletionPercentChangeCosmeticDelegate ChargeableCompletionPercentChangeCosmeticDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDechargeBegin DechargeBeginDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDechargeEnd DechargeEndDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowSkillChecksAtFullCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChargeableComponentID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DechargeDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartingChargePercent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentCharge, meta=(AllowPrivateAccess=true))
	FSpeedBasedNetSyncedValue _currentCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDBDTimer _skillCheckFailurePenaltyTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDBDTimer _dechargeTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FChargeData> _chargesThisFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FChargeData> _redirectedChargesThisFrame;

	UPROPERTY(EditAnywhere, Transient)
	TMap<uint32, UChargeStrategy*> _activeChargeStrategies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _instigatorsSinceEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, float> _tunableValueMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<int32> _playersWhoDidSkillCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isChargeBlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _enableAddCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _enableSkillCheckFailurePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isDecharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _stopDechargingWhenComplete;

public:
	UFUNCTION(BlueprintCallable)
	void SetSecondsToCharge(float secondsToCharge);

	UFUNCTION(BlueprintCallable)
	void SetDechargeRate(float dechargeRate);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentCharge();

	UFUNCTION(BlueprintCallable)
	void OnCurrentChargeChanged(float value);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetPermanentCharge(float chargePercent);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnEmptied() const;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCompleteChanged(bool completed) const;

public:
	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	bool IsSkillCheckTimePenaltyActive() const;

	UFUNCTION(BlueprintPure)
	bool IsChargeComplete() const;

	UFUNCTION(BlueprintCallable)
	void IncreaseMaxCharge(float percent);

	UFUNCTION(BlueprintPure)
	bool HasPlayerDoneSkillCheck(int32 playerID) const;

	UFUNCTION(BlueprintPure)
	float GetTunableValue(FName tunableValueID) const;

	UFUNCTION(BlueprintPure)
	float GetPlayerCountPenaltyModifier(int32 playerCount) const;

	UFUNCTION(BlueprintPure)
	float GetPermanentChargePercent() const;

	UFUNCTION(BlueprintPure)
	float GetPercentComplete() const;

	UFUNCTION(BlueprintPure)
	float GetMaxCharge() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentCharge() const;

	UFUNCTION(BlueprintPure)
	float GetChargingSpeed() const;

	UFUNCTION(BlueprintPure)
	float GetChargeRemaining() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetEnableSkillCheckFailurePenalty(const bool enable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetEnableAddCharge(const bool enable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Reset();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ApplyStartingCharge();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddChargePercent(float chargePercent, AActor* instigator, bool bypassSkillCheckFail, bool isOneTimeIncrease, bool isChargeWithItem);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddCharge(float chargeAmount, AActor* instigator, bool bypassSkillCheckFail, bool isOneTimeIncrease, bool isChargeWithItem);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChargeableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChargeableComponent) { return 0; }
