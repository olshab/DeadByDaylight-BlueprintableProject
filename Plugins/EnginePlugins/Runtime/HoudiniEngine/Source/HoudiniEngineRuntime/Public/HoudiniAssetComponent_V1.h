#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/PrimitiveComponent.h"
#include "BodySetupEnums.h"
#include "Engine/EngineTypes.h"
#include "HoudiniAssetComponent_V1.generated.h"

class UPhysicalMaterial;
class UAssetUserData;
class UFoliageType_InstancedStaticMesh;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
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
	float GeneratedDistanceFieldResolutionScale;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BakeFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TempCookFolder;

public:
	UHoudiniAssetComponent_V1();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetComponent_V1) { return 0; }
