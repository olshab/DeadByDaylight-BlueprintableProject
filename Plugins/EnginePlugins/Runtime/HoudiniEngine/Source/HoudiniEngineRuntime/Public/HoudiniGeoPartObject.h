#pragma once

#include "CoreMinimal.h"
#include "EHoudiniPartType.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniMeshSocket.h"
#include "EHoudiniInstancerType.h"
#include "HoudiniGeoPartObject.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniGeoPartObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ObjectId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeoId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasCustomPartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SplitGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform TransformMatrix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NodePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniPartType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniInstancerType InstancerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VolumeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasEditLayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VolumeLayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VolumeTileIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEditable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTemplated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInstanced;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasGeoChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasPartChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasTransformChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasMaterialsChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHoudiniMeshSocket> AllMeshSockets;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGeoPartObject();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGeoPartObject) { return 0; }
