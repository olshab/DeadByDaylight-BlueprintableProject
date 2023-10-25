#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "K22Power.generated.h"

class UChargeableComponent;
class AConjoinedTwin;
class UPowerChargeComponent;
class UK22PowerChargePresentationItemProgressComponent;

UCLASS(Blueprintable)
class AK22Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UChargeableComponent* _releaseConjoinedTwinChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UChargeableComponent* _possessConjoinedTwinChargeable;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ConjoinedTwin, Transient, meta=(AllowPrivateAccess=true))
	AConjoinedTwin* _conjoinedTwin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AConjoinedTwin* _conjoinedTwinParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AConjoinedTwin> _conjoinedTwinClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerRechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeBeforeAutoDestroy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeBeforeRecallAvailable;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ConjoinedTwin();

	UFUNCTION(BlueprintCallable)
	void OnPowerChargeEmpty();

	UFUNCTION(BlueprintCallable)
	void OnFirstAttachmentToSister();

public:
	UFUNCTION(BlueprintPure)
	AConjoinedTwin* GetConjoinedTwin() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPossessTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK22Power();
};

FORCEINLINE uint32 GetTypeHash(const AK22Power) { return 0; }
