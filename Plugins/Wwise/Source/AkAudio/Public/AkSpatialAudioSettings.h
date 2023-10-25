#pragma once

#include "CoreMinimal.h"
#include "AkSpatialAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkSpatialAudioSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 MaxSoundPropagationDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementThreshold;

	UPROPERTY(EditAnywhere)
	uint32 NumberOfPrimaryRays;

	UPROPERTY(EditAnywhere)
	uint32 ReflectionOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumPathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CPULimitPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableDiffractionOnReflections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableGeometricDiffractionAndTransmission;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CalcEmitterVirtualPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseOcclusion;

public:
	AKAUDIO_API FAkSpatialAudioSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkSpatialAudioSettings) { return 0; }
