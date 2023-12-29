#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPerspectiveChangeCameraMovementData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FPlayerPerspectiveChangeCameraMovementData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InitialCameraRelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetCameraRelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldForceLockCameraBehindPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* TransitionCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraMovementDuration;

public:
	DEADBYDAYLIGHT_API FPlayerPerspectiveChangeCameraMovementData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPerspectiveChangeCameraMovementData) { return 0; }
