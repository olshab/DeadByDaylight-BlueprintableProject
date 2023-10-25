#pragma once

#include "CoreMinimal.h"
#include "PendingInstantAction.h"
#include "PendingInstantActionList.generated.h"

USTRUCT(BlueprintType)
struct FPendingInstantActionList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPendingInstantAction> Actions;

public:
	REVERSIBLEACTIONSYSTEM_API FPendingInstantActionList();
};

FORCEINLINE uint32 GetTypeHash(const FPendingInstantActionList) { return 0; }
