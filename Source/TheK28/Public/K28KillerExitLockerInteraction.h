#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "EK28ExitLockerCameraBehaviour.h"
#include "DBDTunableRowHandle.h"
#include "K28KillerExitLockerInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerExitLockerInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK28ExitLockerCameraBehaviour _cameraBehaviour;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeSearchLockerInteractionBlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDotProductFadeOutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rotationMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fovChangeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _fovChangeTeleportationCurve;

public:
	UK28KillerExitLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerExitLockerInteraction) { return 0; }
