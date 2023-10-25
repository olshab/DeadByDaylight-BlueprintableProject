#pragma once

#include "CoreMinimal.h"
#include "EHoudiniAssetState.h"
#include "ComponentInstanceDataCache.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetBlueprintOutput.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniAssetBlueprintInstanceData.generated.h"

class UHoudiniAsset;
class UHoudiniInput;

USTRUCT(BlueprintType)
struct FHoudiniAssetBlueprintInstanceData: public FActorComponentInstanceData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHoudiniAsset* HoudiniAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AssetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniAssetState AssetState;

	UPROPERTY(EditAnywhere)
	uint32 SubAssetIndex;

	UPROPERTY(EditAnywhere)
	uint32 AssetCookCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasBeenLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasBeenDuplicated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPendingDelete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecookRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRebuildRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCooking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceNeedUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLastCookSuccess;

	UPROPERTY(EditAnywhere)
	FGuid ComponentGUID;

	UPROPERTY(EditAnywhere)
	FGuid HapiGUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRegisteredComponentTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SourceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> Outputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInput*> Inputs;

public:
	HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintInstanceData();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniAssetBlueprintInstanceData) { return 0; }
