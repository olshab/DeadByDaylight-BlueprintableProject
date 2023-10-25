#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "BasicChargeableInteraction.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBasicChargeableInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoSpawnChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ResetProgressWhenStoppingInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoAddCharge;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnedChargeable, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _spawnedChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _chargeTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnedChargeable();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBasicChargeableInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBasicChargeableInteraction) { return 0; }
