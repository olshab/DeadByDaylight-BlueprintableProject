#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SecondaryInteractionProperties.h"
#include "EInputInteractionType.h"
#include "K28TeleportInteraction.generated.h"

class UCurveFloat;
class UObject;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28TeleportInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _confirmTeleportationProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _returnToRemnantProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInputInteractionType _triggerTeleportInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chargedSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _cancelledSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _releaseInputMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minimumChargePercentageToConsiderTeleportButtonPress;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestTeleportToTarget(ASlasherPlayer* killer, UObject* teleportTarget);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RefuseTeleportationRequest();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ConfirmTeleportationRequest(ASlasherPlayer* killer, UObject* teleportTarget);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CompleteTeleportation();

public:
	UK28TeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28TeleportInteraction) { return 0; }
