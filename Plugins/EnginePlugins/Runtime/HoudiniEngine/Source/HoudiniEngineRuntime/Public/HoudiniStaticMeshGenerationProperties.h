#pragma once

#include "CoreMinimal.h"
#include "BodySetupEnums.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "HoudiniStaticMeshGenerationProperties.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

USTRUCT(BlueprintType)
struct FHoudiniStaticMeshGenerationProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bGeneratedDoubleSidedGeometry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPhysicalMaterial* GeneratedPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBodyInstance DefaultBodyInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratedLightMapResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWalkableSlopeOverride GeneratedWalkableSlopeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratedLightMapCoordinateIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bGeneratedUseMaximumStreamingTexelRatio : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratedStreamingDistanceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAssetUserData*> GeneratedAssetUserData;

public:
	HOUDINIENGINERUNTIME_API FHoudiniStaticMeshGenerationProperties();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniStaticMeshGenerationProperties) { return 0; }
