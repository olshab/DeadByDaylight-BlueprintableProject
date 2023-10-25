#pragma once

#include "CoreMinimal.h"
#include "InstantActionList.generated.h"

class UBaseReversibleInstantActionHandler;

USTRUCT(BlueprintType)
struct FInstantActionList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UBaseReversibleInstantActionHandler*> Actions;

public:
	REVERSIBLEACTIONSYSTEM_API FInstantActionList();
};

FORCEINLINE uint32 GetTypeHash(const FInstantActionList) { return 0; }
