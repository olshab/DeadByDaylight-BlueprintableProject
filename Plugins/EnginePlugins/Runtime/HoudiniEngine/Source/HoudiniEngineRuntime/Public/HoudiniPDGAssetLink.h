#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPDGLinkState.h"
#include "AggregatedWorkItemTally.h"
#include "Engine/EngineTypes.h"
#include "HoudiniPDGAssetLink.generated.h"

class AActor;
class UTOPNetwork;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniPDGAssetLink : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, DuplicateTransient)
	FString AssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, DuplicateTransient)
	FString AssetNodePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, DuplicateTransient)
	int32 AssetID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTOPNetwork*> AllTOPNetworks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedTOPNetworkIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	EPDGLinkState LinkState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseTOPNodeFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseTOPOutputFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TOPNodeFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TOPOutputFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	int32 NumWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	FAggregatedWorkItemTally WorkItemTally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OutputCachePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool bNeedsUIRefresh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* OutputParentActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath BakeFolder;

public:
	UHoudiniPDGAssetLink();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniPDGAssetLink) { return 0; }
