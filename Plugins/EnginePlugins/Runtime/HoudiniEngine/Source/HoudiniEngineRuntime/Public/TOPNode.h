#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPDGNodeState.h"
#include "AggregatedWorkItemTally.h"
#include "TOPWorkResult.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.h"
#include "WorkItemTally.h"
#include "OutputActorOwner.h"
#include "TOPNode.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UTOPNode : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	int32 NodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString NodeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString NodePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString ParentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* WorkResultParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	TArray<FTOPWorkResult> WorkResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	EPDGNodeState NodeState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	bool bCachedHaveNotLoadedWorkResults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	bool bCachedHaveLoadedWorkResults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	bool bHasChildNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FString> ClearedLandscapeLayers;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	FWorkItemTally WorkItemTally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	FAggregatedWorkItemTally AggregatedWorkItemTally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	bool bHasReceivedCookCompleteEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOutputActorOwner OutputActorOwner;

public:
	UTOPNode();
};

FORCEINLINE uint32 GetTypeHash(const UTOPNode) { return 0; }
