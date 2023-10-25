#pragma once

#include "CoreMinimal.h"
#include "EK33SpecialModeChargeState.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "NonTunableStat.h"
#include "TagStateBool.h"
#include "K33SpecialModeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK33_API UK33SpecialModeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInSpecialMode, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInSpecialMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _specialModeMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _specialModeMaximumChargePercentOnPickUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _specialModeMovingInTunnelChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _specialModeDechargeRatePerAttackingTurrets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _terrorRadiusSizeInSpecialMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FNonTunableStat _specialModeNormalChargeRate;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ChargeState)
	EK33SpecialModeChargeState _chargeState;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInSpecialMode();

	UFUNCTION(BlueprintCallable)
	void OnRep_ChargeState();

	UFUNCTION(BlueprintCallable)
	void OnPowerChargeChanged(const float currentChargePercent);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33SpecialModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33SpecialModeComponent) { return 0; }
