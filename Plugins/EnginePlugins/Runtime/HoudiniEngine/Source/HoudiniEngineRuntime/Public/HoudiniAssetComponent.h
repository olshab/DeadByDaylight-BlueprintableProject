#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniAssetState.h"
#include "HoudiniAssetStateEvents.h"
#include "HoudiniStaticMeshGenerationProperties.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "EHoudiniStaticMeshMethod.h"
#include "EHoudiniAssetStateResult.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniAssetComponent.generated.h"

class UHoudiniInput;
class UHoudiniAsset;
class UHoudiniAssetComponent;
class UHoudiniParameter;
class UHoudiniOutput;
class UHoudiniHandleComponent;
class UHoudiniPDGAssetLink;
class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetComponent : public UPrimitiveComponent, public IHoudiniAssetStateEvents
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniAsset* HoudiniAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookOnParameterChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUploadTransformsToHoudiniEngine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookOnTransformChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCookOnAssetInputCook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOutputless;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOutputTemplateGeos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseOutputNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath TemporaryCookFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath BakeFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniStaticMeshMethod StaticMeshMethod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMeshBuildSettings StaticMeshBuildSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideGlobalProxyStaticMeshSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementByTimerOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProxyMeshAutoRefineTimeoutSecondsOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	int32 AssetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	TArray<int32> NodeIdsToCook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	TMap<int32, int32> OutputNodeCookCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient, Export)
	TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;

	UPROPERTY(EditAnywhere, DuplicateTransient)
	FGuid ComponentGUID;

	UPROPERTY(EditAnywhere, DuplicateTransient)
	FGuid HapiGUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	FString HapiAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	EHoudiniAssetState AssetState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	EHoudiniAssetState DebugLastAssetState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	EHoudiniAssetStateResult AssetStateResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	FTransform LastComponentTransform;

	UPROPERTY(EditAnywhere)
	uint32 SubAssetIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	int32 AssetCookCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bHasBeenLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bHasBeenDuplicated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bPendingDelete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bRecookRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bRebuildRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bEnableCooking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bForceNeedUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bLastCookSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bParameterDefinitionUpdateNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bBlueprintStructureModified;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bBlueprintModified;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameter*> Parameters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniInput*> Inputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniOutput*> Outputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHoudiniBakedOutput> BakedOutputs;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniHandleComponent*> HandleComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bHasComponentTransformChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bFullyLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniPDGAssetLink* PDGAssetLink;

	UPROPERTY(EditAnywhere)
	FTimerHandle RefineMeshesTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bNoProxyMeshNextCookRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	TMap<UObject*, int32> InputPresets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bBakeAfterNextCook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bCachedIsPreview;

	UPROPERTY(EditAnywhere, Transient)
	double LastTickTime;

public:
	UHoudiniAssetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetComponent) { return 0; }
