#pragma once

#include "CoreMinimal.h"
#include "HackableDroneState.h"
#include "StatProperty.h"
#include "K31DroneState.h"
#include "K31DroneActiveState.generated.h"

class UTimerObject;
class UChargeableComponent;

UCLASS(Blueprintable)
class THEK31_API UK31DroneActiveState : public UK31DroneState, public IHackableDroneState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _unhackableDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _revertToScoutingMaxDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _revertToScoutingMinDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _revertToScoutingRechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _revertToScoutingDechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _revertToScoutingDechargeDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _doNearbyClawTrapsDisableHacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _revertToScoutingCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _unhackableTimer;

public:
	UFUNCTION(BlueprintCallable)
	float GetRevertToScoutingMaxCharge();

	UFUNCTION(BlueprintCallable)
	float GetRevertToScoutingCurrentCharge();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeDepleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneActiveState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneActiveState) { return 0; }
