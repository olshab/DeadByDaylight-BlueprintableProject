#pragma once

#include "CoreMinimal.h"
#include "AggregationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAggregationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MergeGeometries : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 EnableGeometryCulling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeometryCullingPrecision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SubdivideGeometryBasedOnUVTiles : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SubdivisionTileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProcessSelectionSetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProcessSelectionSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 KeepUnprocessedSceneMeshes : 1;

public:
	SIMPLYGONUOBJECTS_API FAggregationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAggregationSettings) { return 0; }
