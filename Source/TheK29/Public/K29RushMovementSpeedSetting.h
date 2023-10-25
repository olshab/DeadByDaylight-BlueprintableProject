#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "K29RushMovementSpeedSetting.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK29RushMovementSpeedSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool InUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* SpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle PitchTurnRateMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle YawTurnRateLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle YawTurnRateMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMovementAllowed;

public:
	THEK29_API FK29RushMovementSpeedSetting();
};

FORCEINLINE uint32 GetTypeHash(const FK29RushMovementSpeedSetting) { return 0; }
