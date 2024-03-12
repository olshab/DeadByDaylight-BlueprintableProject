#pragma once

#include "CoreMinimal.h"
#include "MenuCameraViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraViewSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FieldOfView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConstrainAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseFieldOfViewForLOD;

public:
	DEADBYDAYLIGHT_API FMenuCameraViewSettings();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraViewSettings) { return 0; }
