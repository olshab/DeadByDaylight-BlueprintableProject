#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "OnHeatChargeUpdateDelegate.h"
#include "HillbillyChainsawOverheatComponent.generated.h"

class UPowerChargeComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawOverheatComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHeatChargeUpdateDelegate OnHeatChargeUpdateDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsChainsawOverheating, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isChainsawOverheating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _chainsawHeatCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatRevStartAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatRevChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDashChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _heatDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _overheatDischargeRate;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsChainsawOverheating();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnHeatChargeUpdate(const float currentCharge, const float previosCharge);

public:
	UFUNCTION(BlueprintPure)
	bool IsChainsawOverheating() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnHeatChargeFull();

	UFUNCTION(BlueprintCallable)
	void Authority_OnHeatChargeEmpty();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHillbillyChainsawOverheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawOverheatComponent) { return 0; }
