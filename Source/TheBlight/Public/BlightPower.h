#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "EWallGrabState.h"
#include "BlightPower.generated.h"

class UPowerChargeComponent;
class UChargeableComponent;
class UBlightPowerStateComponent;
class UPowerToggleComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class ABlightPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _blightPowerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _blightPowerToggle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _blightPowerActivateChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blightPowerActivateMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _blightPowerMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blightPowerRechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _inPowerEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _outOfPowerEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnPowerStateChanged(const EWallGrabState previousState, const EWallGrabState newState);

public:
	ABlightPower();
};

FORCEINLINE uint32 GetTypeHash(const ABlightPower) { return 0; }
