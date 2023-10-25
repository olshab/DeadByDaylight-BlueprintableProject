#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TOPNetwork.generated.h"

class UTOPNode;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UTOPNetwork : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient)
	int32 NodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString NodeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString NodePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTOPNode*> AllTOPNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedTOPIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString ParentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowResults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoLoadResults;

public:
	UTOPNetwork();
};

FORCEINLINE uint32 GetTypeHash(const UTOPNetwork) { return 0; }
