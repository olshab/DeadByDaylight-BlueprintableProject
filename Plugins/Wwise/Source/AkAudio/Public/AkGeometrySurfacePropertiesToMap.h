#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AkGeometrySurfacePropertiesToMap.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfacePropertiesToMap
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionValue;

public:
	AKAUDIO_API FAkGeometrySurfacePropertiesToMap();
};

FORCEINLINE uint32 GetTypeHash(const FAkGeometrySurfacePropertiesToMap) { return 0; }
