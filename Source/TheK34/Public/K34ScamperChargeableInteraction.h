#pragma once

#include "CoreMinimal.h"
#include "EScamperPhase.h"
#include "ChargeableInteractionDefinition.h"
#include "K34ScamperMovementSpeedSetting.h"
#include "DBDTunableRowHandle.h"
#include "K34ScamperChargeableInteraction.generated.h"

class UInteractionDefinition;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK34ScamperChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentPhase, Transient, meta=(AllowPrivateAccess=true))
	EScamperPhase _currentPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<EScamperPhase, FK34ScamperMovementSpeedSetting> _scamperMovementSpeedSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _chainVaultDetectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _serverChainVaultDetectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chainingHeldInputBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _chainVaultSweepRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cameraTransitionToThirdPersonViewDuration;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ActivateChaining(UInteractionDefinition* chainInteraction);

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentPhase();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_EndChargingPhase();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BeginChargingPhase();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34ScamperChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK34ScamperChargeableInteraction) { return 0; }
