#pragma once

#include "CoreMinimal.h"
#include "ArmIKSensorComponent.h"
#include "SurvivorAimableArmSensor.generated.h"

class UAimableComponent;
class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDANIMATION_API USurvivorAimableArmSensor : public UArmIKSensorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACollectable* _aimableCollectable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAimableComponent* _aimable;

public:
	USurvivorAimableArmSensor();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimableArmSensor) { return 0; }
