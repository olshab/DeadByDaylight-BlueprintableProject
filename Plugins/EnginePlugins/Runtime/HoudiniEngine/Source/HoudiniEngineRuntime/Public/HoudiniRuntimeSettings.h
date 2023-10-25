#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRuntimeSettingsSessionType.h"
#include "BodySetupEnums.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.h"
#include "EHoudiniExecutableType.h"
#include "HoudiniRuntimeSettings.generated.h"

class UAssetUserData;
class UFoliageType_InstancedStaticMesh;
class UPhysicalMaterial;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniRuntimeSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerHost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ServerPort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerPipeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStartAutomaticServer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutomaticServerTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncWithHoudiniCook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookUsingHoudiniTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncViewport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncHoudiniViewport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncUnrealViewport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMultiAssetDialog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreferHdaMemoryCopyOverHdaSourceFile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPauseCookingOnStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisplaySlateCookingNotifications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultTemporaryCookFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultBakeFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableTheReferenceCountedInputSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MarshallingLandscapesUseDefaultUnrealScaling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MarshallingLandscapesUseFullResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MarshallingLandscapesForceMinMaxValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MarshallingLandscapesForcedMinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MarshallingLandscapesForcedMaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddRotAndScaleAttributesOnCurves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseLegacyInputCurves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MarshallingSplineResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDefaultMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementByTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProxyMeshAutoRefineTimeoutSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bDoubleSidedGeometry : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPhysicalMaterial* PhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBodyInstance DefaultBodyInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LightMapResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LpvBiasMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GeneratedDistanceFieldResolutionScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWalkableSlopeOverride WalkableSlopeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LightMapCoordinateIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bUseMaximumStreamingTexelRatio : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StreamingDistanceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UAssetUserData*> AssetUserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFullPrecisionUVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SrcLightmapIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DstLightmapIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinLightmapResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveDegenerates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMikkTSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBuildAdjacencyBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bComputeWeightedNormals : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bBuildReversedIndexBuffer : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bUseHighPrecisionTangentBasis : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceFieldResolutionScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bGenerateDistanceFieldAsIfTwoSided : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bSupportFaceRemap : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPDGAsyncCommandletImportEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableBackwardCompatibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutomaticLegacyHDARebuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCustomHoudiniLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath CustomHoudiniLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath CustomHoudiniHomeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CookingThreadStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HoudiniEnvironmentFiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OtlSearchPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DsoSearchPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ImageDsoSearchPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AudioDsoSearchPath;

public:
	UHoudiniRuntimeSettings();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniRuntimeSettings) { return 0; }
