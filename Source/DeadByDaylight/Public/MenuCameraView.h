#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MenuCameraViewSettings.h"
#include "MenuCameraView.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraView
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Override_Settings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMenuCameraViewSettings Settings;

public:
	DEADBYDAYLIGHT_API FMenuCameraView();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraView) { return 0; }
