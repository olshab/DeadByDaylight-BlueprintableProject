#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetBBEntryTime.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_SetBBEntryTime : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToSetKey;

public:
	UBTTask_SetBBEntryTime();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetBBEntryTime) { return 0; }
