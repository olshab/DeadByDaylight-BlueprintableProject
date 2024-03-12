#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "OnHeatChargeUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HillbillyChainsawOverheatComponent.generated.h"

class UStatusEffect;
class UTimerObject;
class UPowerChargeComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEHILLBILLY_API UHillbillyChainsawOverheatComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHeatChargeUpdateDelegate OnHeatChargeUpdateDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _overheatTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsChainsawOverheating, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isChainsawOverheating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _chainsawHeatCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _overheatStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatRevStartAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatRevInputPressActivationBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatSurvivorHitAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatRevChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDashChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDecayDelay;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsChainsawOverheating() const;

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	bool IsChainsawOverheating() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnHeatChargeFull() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHillbillyChainsawOverheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawOverheatComponent) { return 0; }
