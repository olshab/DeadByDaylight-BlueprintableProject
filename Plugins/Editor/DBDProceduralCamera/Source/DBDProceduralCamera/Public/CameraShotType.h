#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MotionType.h"
#include "CameraShotType.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class DBDPROCEDURALCAMERA_API ACameraShotType : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCameraRotationFixed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumDistanceFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDistanceFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HorizontalAngleFreedom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VerticalAngleFreedom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<MotionType> CameraMotionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KeyPoseNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USplineComponent* CameraTrack;

public:
	ACameraShotType();
};

FORCEINLINE uint32 GetTypeHash(const ACameraShotType) { return 0; }
