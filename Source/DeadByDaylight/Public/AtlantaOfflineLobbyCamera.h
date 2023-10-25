#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaOfflineLobbyCamera.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AAtlantaOfflineLobbyCamera : public ACameraActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZCameraPositionOffsetMultiplier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _kDefaultAspectRatio;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCameraRotation(FRotator rotationVector);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCameraPosition(FVector positionVector);

public:
	AAtlantaOfflineLobbyCamera();
};

FORCEINLINE uint32 GetTypeHash(const AAtlantaOfflineLobbyCamera) { return 0; }
