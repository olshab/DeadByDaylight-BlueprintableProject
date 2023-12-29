#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "K34ScamperMovementSpeedSetting.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK34ScamperMovementSpeedSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* SpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* MouseTurnLimitationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* ControllerTurnLimitationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty AccelerationMultiplierModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty Duration;

public:
	THEK34_API FK34ScamperMovementSpeedSetting();
};

FORCEINLINE uint32 GetTypeHash(const FK34ScamperMovementSpeedSetting) { return 0; }
