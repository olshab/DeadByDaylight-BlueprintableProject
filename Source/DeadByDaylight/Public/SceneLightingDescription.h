#pragma once

#include "CoreMinimal.h"
#include "LightingSpecifics.h"
#include "UObject/SoftObjectPtr.h"
#include "SceneLightingDescription.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct FSceneLightingDescription
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLightingSpecifics LightingDetailsLowMedium;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLightingSpecifics LightingDetailsHighUltra;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLightingSpecifics LightingAtlanta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTextureCube> TextureCube;

public:
	DEADBYDAYLIGHT_API FSceneLightingDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSceneLightingDescription) { return 0; }
