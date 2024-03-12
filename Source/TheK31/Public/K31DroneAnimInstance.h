#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EK31DroneStateID.h"
#include "K31DroneAnimInstance.generated.h"

class UK31DroneStateController;
class AK31Drone;

UCLASS(Blueprintable, NonTransient)
class UK31DroneAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK31DroneStateID _droneState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UK31DroneStateController* _droneStateController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AK31Drone* _owningDrone;

public:
	UK31DroneAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneAnimInstance) { return 0; }
