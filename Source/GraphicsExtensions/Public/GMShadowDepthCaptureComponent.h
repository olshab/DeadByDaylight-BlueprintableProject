#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EShadowDepthLODSelection.h"
#include "Components/SceneComponent.h"
#include "GMShadowDepthCaptureComponent.generated.h"

class UTextureRenderTarget2D;
class UGMShadowDepthCapture;
class USpotLightComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMShadowDepthCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DepthTargetWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DepthTargetHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UTextureRenderTarget2D* DepthTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaptureDynamicPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaptureStaticPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaptureEveryFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaptureOnlyIfVisibleFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaptureObjectsWithBlockingCollisionVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EShadowDepthLODSelection LODSelection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinPrimitivePixelDiameterBeforeCulling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 ShadowClipRegion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OuterConeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShadowNearPlaneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	float AttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCastTranslucentShadowsAsOpaque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDrawDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGMShadowDepthCapture* _shadowDepthCapture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USpotLightComponent* _spotLightComponent;

public:
	UFUNCTION(BlueprintCallable)
	void RequestCaptureUpdate();

public:
	UGMShadowDepthCaptureComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGMShadowDepthCaptureComponent) { return 0; }
