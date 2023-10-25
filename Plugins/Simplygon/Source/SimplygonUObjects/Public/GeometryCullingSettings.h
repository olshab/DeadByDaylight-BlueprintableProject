#pragma once

#include "CoreMinimal.h"
#include "GeometryCullingSettings.generated.h"

USTRUCT(BlueprintType)
struct FGeometryCullingSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseClippingPlanes : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClippingPlaneSelectionSetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClippingPlaneSelectionSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseClippingGeometry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClippingGeometrySelectionSetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClippingGeometrySelectionSetName;

public:
	SIMPLYGONUOBJECTS_API FGeometryCullingSettings();
};

FORCEINLINE uint32 GetTypeHash(const FGeometryCullingSettings) { return 0; }
