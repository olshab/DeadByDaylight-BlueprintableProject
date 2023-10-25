#pragma once

#include "CoreMinimal.h"
#include "EHoudiniInputType.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniXformType.h"
#include "EHoudiniLandscapeExportType.h"
#include "HoudiniInput.generated.h"

class UHoudiniInputObject;
class AActor;
class UHoudiniInputHoudiniSplineComponent;
class ULandscapeComponent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInput : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniInputType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	EHoudiniInputType PreviousType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	int32 AssetNodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	int32 InputNodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InputIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	int32 ParmId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsObjectPathParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	TArray<int32> CreatedDataNodeIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bHasChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bNeedsToTriggerUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBox CachedBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Help;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniXformType KeepWorldTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPackBeforeMerge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceRotScaleEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceBboxEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceMaterialEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExportLODs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExportSockets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExportColliders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExportMaterialParameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookOnCurveChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> GeometryInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStaticMeshChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> AssetInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInputAssetConnectedInHoudini;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> CurveInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultCurveOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddRotAndScaleAttributesOnCurves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseLegacyInputCurves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> LandscapeInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeHasExportTypeChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> WorldInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> WorldInputBoundSelectorObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsWorldInputBoundSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWorldInputBoundSelectorAutoUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnrealSplineResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> SkeletalInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputObject*> GeometryCollectionInputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TSet<ULandscapeComponent*> LandscapeSelectedComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	TSet<int32> InputNodesPendingDelete;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	TArray<UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	TArray<UHoudiniInputObject*> LastUndoDeletedInputs;

	UPROPERTY()
	bool bUpdateInputLandscape_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniLandscapeExportType LandscapeExportType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeExportSelectionOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeAutoSelectComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeExportMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeExportLighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeExportNormalizedUVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeExportTileUVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniInput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInput) { return 0; }
