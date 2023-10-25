#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_CopyBBEntry.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_CopyBBEntry : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFrom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CopyOnlyValidKeyValue;

public:
	UBTTask_CopyBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_CopyBBEntry) { return 0; }
