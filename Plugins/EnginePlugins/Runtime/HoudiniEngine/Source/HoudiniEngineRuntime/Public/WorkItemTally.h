#pragma once

#include "CoreMinimal.h"
#include "WorkItemTallyBase.h"
#include "WorkItemTally.generated.h"

USTRUCT(BlueprintType)
struct FWorkItemTally: public FWorkItemTallyBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> AllWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> WaitingWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> ScheduledWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> CookingWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> CookedWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> ErroredWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> CookCancelledWorkItems;

public:
	HOUDINIENGINERUNTIME_API FWorkItemTally();
};

FORCEINLINE uint32 GetTypeHash(const FWorkItemTally) { return 0; }
