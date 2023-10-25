#pragma once

#include "CoreMinimal.h"
#include "EComputeVisibilityMode.h"
#include "VisibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FVisibilitySettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseVisibilityWeightsInReducer : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseVisibilityWeightsInTexcoordGenerator : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VisibilityWeightsPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CullOccludedGeometry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ForceVisibilityCalculation : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseBackfaceCulling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CameraSelectionSetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CameraSelectionSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OccluderSelectionSetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OccluderSelectionSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FillNonVisibleAreaThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 RemoveTrianglesNotOccludingOtherTriangles : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ConservativeMode : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EComputeVisibilityMode ComputeVisibilityMode;

public:
	SIMPLYGONUOBJECTS_API FVisibilitySettings();
};

FORCEINLINE uint32 GetTypeHash(const FVisibilitySettings) { return 0; }
