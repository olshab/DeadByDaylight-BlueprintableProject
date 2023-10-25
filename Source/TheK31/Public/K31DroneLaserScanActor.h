#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerPlatformProperties.h"
#include "K31DroneLaserScanActor.generated.h"

class UMaterialInstance;
class UStaticMeshComponent;
class UGMShadowDepthCaptureComponent;

UCLASS(Blueprintable)
class THEK31_API AK31DroneLaserScanActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* LaserScanMeshMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StaticCapturesLightAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DynamicCapturesLightAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DepthCaptureNearPlaneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* FrontLaserScanSM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* BackLaserScanSM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* FrontDepthCaptureComponentDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* BackDepthCaptureComponentDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* XDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* YDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* NegXDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGMShadowDepthCaptureComponent* NegYDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt DynamicDepthCaptureSizeWidth;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt DynamicDepthCaptureSizeHeight;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt StaticDepthCaptureSizeWidth;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt StaticDepthCaptureSizeHeight;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLaserScanMeshMaterial(UMaterialInstance* newLaserScanMeshMaterial);

	UFUNCTION(BlueprintCallable)
	void SetLaserVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void RequestStaticDepthCapturesUpdate();

	UFUNCTION(BlueprintCallable)
	void InitDroneLaserScan();

	UFUNCTION(BlueprintCallable)
	void DeactivateDroneLaserScan();

	UFUNCTION(BlueprintCallable)
	void ActivateDroneLaserScan();

public:
	AK31DroneLaserScanActor();
};

FORCEINLINE uint32 GetTypeHash(const AK31DroneLaserScanActor) { return 0; }
