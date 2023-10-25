#pragma once

#include "CoreMinimal.h"
#include "TOPWorkResultObject.h"
#include "TOPWorkResult.generated.h"

USTRUCT(BlueprintType)
struct FTOPWorkResult
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	int32 WorkItemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 WorkItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	TArray<FTOPWorkResultObject> ResultObjects;

public:
	HOUDINIENGINERUNTIME_API FTOPWorkResult();
};

FORCEINLINE uint32 GetTypeHash(const FTOPWorkResult) { return 0; }
