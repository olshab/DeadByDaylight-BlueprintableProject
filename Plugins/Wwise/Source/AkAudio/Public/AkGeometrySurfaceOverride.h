#pragma once

#include "CoreMinimal.h"
#include "AkGeometrySurfaceOverride.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfaceOverride
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAcousticTexture* AcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableOcclusionOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionValue;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float SurfaceArea;

public:
	AKAUDIO_API FAkGeometrySurfaceOverride();
};

FORCEINLINE uint32 GetTypeHash(const FAkGeometrySurfaceOverride) { return 0; }
