#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InspectK31DroneInteraction.generated.h"

class AActor;
class UK31DroneActionProcessor;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UInspectK31DroneInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK31DroneActionProcessor> _actionProcessorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _inputInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _enableMaxSpeedSlowdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _dechargingSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UK31DroneActionProcessor* _actionProcessor;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIsPressingInput(bool isPressing);

	UFUNCTION(BlueprintCallable)
	void OnChargeCompletedChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInspectK31DroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInspectK31DroneInteraction) { return 0; }
