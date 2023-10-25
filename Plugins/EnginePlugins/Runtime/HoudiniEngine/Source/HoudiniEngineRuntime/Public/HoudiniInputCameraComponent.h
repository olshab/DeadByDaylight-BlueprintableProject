#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputCameraComponent.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOrthographic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OrthoWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OrthoNearClipPlane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OrthoFarClipPlane;

public:
	UHoudiniInputCameraComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputCameraComponent) { return 0; }
