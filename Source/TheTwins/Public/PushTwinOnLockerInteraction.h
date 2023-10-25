#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PushTwinOnLockerInteraction.generated.h"

class AConjoinedTwin;
class ADBDPlayer;
class UChargeableComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PushTwinOnLockerChargeable, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _pushTwinOnLockerChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _pushTwinOnLockerMaxCharge;

private:
	UFUNCTION(BlueprintCallable)
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION(BlueprintCallable)
	void OnRep_PushTwinOnLockerChargeable();

	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPushTwinOnLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPushTwinOnLockerInteraction) { return 0; }
