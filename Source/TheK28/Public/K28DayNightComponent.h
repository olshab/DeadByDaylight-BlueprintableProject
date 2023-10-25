#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "TagStateBool.h"
#include "EK28NightCycleState.h"
#include "K28DayNightComponent.generated.h"

class UAkComponent;
class UK28KillerComponent;
class UK28SurvivorComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28DayNightComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28KillerComponent> _killerK28ComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK28SurvivorComponent> _survivorK28ComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chargesRequiredForNightCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _transitionToNightDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _transitiionToDayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chargesRequiredForNightDischarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _killerInjuresSurvivorChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _killerHookSurvivorChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerTeleportsToRemnantChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _defaultNightChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _injuredSurvivorsChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _killerHidingInLockerChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultNightTimeDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorInLockerDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nighttimeNearingActivationThresholdPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nightCycleNearingEndThresholdPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentDayNightCycle, meta=(AllowPrivateAccess=true))
	EK28NightCycleState _currentNightCycleState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _authority_numberInjuredSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	float _maxChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	float _currentChargeAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NighttimeNearingActivation, meta=(AllowPrivateAccess=true))
	bool _nighttimeNearingActivationThresholdReached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HasReachedNightCycleNearEndThreshold, meta=(AllowPrivateAccess=true))
	bool _hasReachedNightCycleNearEndThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _killerIsAtNightfall;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_NighttimeNearingActivation();

	UFUNCTION(BlueprintCallable)
	void OnRep_HasReachedNightCycleNearEndThreshold();

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentDayNightCycle();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleChanged(UAkComponent* akComponent, EK28NightCycleState newNightCycleState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsInLastTwentySecondsOfNightCycle(UAkComponent* akComponent);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorDamageStateChanged(ECamperDamageState previousDamageState, ECamperDamageState newDamageState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28DayNightComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28DayNightComponent) { return 0; }
