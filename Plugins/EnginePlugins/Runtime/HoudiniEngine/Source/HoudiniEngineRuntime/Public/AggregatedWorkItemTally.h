#pragma once

#include "CoreMinimal.h"
#include "WorkItemTallyBase.h"
#include "AggregatedWorkItemTally.generated.h"

USTRUCT(BlueprintType)
struct FAggregatedWorkItemTally: public FWorkItemTallyBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WaitingWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScheduledWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CookingWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CookedWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ErroredWorkItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CookCancelledWorkItems;

public:
	HOUDINIENGINERUNTIME_API FAggregatedWorkItemTally();
};

FORCEINLINE uint32 GetTypeHash(const FAggregatedWorkItemTally) { return 0; }
