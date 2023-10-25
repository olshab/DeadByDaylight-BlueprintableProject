#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K33TurretMotionTrackerComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretMotionTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _secondsBetweenBipSoundPerKillerDistanceCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _motionTrackerMaxDetectionRange;

public:
	UK33TurretMotionTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretMotionTrackerComponent) { return 0; }
