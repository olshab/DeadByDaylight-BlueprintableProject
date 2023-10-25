#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "BlightPowerState.h"
#include "TunableStat.h"
#include "BlightPowerStateDash.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UBlightPowerStateDash : public UBlightPowerState, public IViewRotationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _vectorInterpToSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _noDashTimeLimitSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _lookAngleToTurnRateCurveController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _lookAngleToTurnRateCurveMouse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _lookAngleToMaxTurnRateCurveMouse;

public:
	UBlightPowerStateDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateDash) { return 0; }
