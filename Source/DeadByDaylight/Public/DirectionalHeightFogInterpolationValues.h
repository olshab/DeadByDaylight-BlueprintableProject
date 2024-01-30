	#pragma once

#include "CoreMinimal.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "UObject/NoExportTypes.h"
#include "DirectionalHeightFogInterpolationValues.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalHeightFogInterpolationValues
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FogDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor FogInscatteringColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DirectionalInscatteringExponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DirectionalInscatteringStartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DirectionalInscatteringColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FogHeightFalloff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FogMaxOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondFogDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondFogHeightFalloff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondFogHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReplaceVolumetricFogAlbedoWithColorGradient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumetricFogGradientIntensityMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceUntilFlatFog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceUntilNoFog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableVolumetricFog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumetricFogScatteringDistribution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor VolumetricFogAlbedo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor VolumetricFogEmissive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumetricFogExtinctionScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumetricFogDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumetricFogStaticLightingScatteringIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideLightColorsWithFogInscatteringColors;

public:
	DEADBYDAYLIGHT_API FDirectionalHeightFogInterpolationValues();
};

FORCEINLINE uint32 GetTypeHash(const FDirectionalHeightFogInterpolationValues) { return 0; }
