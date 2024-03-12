#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "CannibalChainsawPower.h"
#include "TagStateBool.h"
#include "CannibalChainsawPowerComponent.generated.h"

class UPowerChargeComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCannibalChainsawPowerComponent : public UActorComponent, public ICannibalChainsawPower
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _chainsawPowerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _chainsawPowerDischarge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _tantrumPowerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInTantrum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumPowerCharges, Transient, meta=(AllowPrivateAccess=true))
	int32 _numPowerCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _numPowerChargesConsumed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainsawDashDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainsawPowerMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainsawChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainsawMaxNumberOfCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chainsawCooldownIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _chainsawCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chainsawMaxCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tantrumChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tantrumDischargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tantrumMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _tantrumDurationIncreaseRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tantrumDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tantrumMaxDuration;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_OnTantrumPowerChargeFull();

	UFUNCTION(BlueprintCallable)
	void OnRep_NumPowerCharges(int32 previousNumPowerCharges);

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnTantrumPowerChargeFull();

	UFUNCTION(BlueprintCallable)
	void Local_OnTantrumPowerChargeFull();

public:
	UFUNCTION(BlueprintPure)
	int32 GetNumberOfChainsawPowerCharges() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnChainsawPowerChargeFull();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCannibalChainsawPowerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawPowerComponent) { return 0; }
