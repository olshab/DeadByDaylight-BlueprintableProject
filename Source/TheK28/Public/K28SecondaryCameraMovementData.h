#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K28SecondaryCameraMovementData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK28SecondaryCameraMovementData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InitialActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPerformingGrabRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator InitialCameraRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator TargetCameraRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* TransitionCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraMovementDuration;

public:
	THEK28_API FK28SecondaryCameraMovementData();
};

FORCEINLINE uint32 GetTypeHash(const FK28SecondaryCameraMovementData) { return 0; }
