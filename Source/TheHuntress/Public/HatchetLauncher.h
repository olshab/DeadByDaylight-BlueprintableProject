#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "HatchetLauncher.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _angleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _angleOffsetCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _speedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _hatchetSpeedWhenThrowFullyCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _hatchetPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetMinAngleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetMaxAngleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetMinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetLaunchPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _hatchetLaunchPitchMax;

protected:
	UFUNCTION(BlueprintPure)
	bool IsLaunchedHatchetFullyCharged() const;

public:
	UHatchetLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UHatchetLauncher) { return 0; }
