#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetIsChased.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_SetIsChased : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ToSetValue;

public:
	UBTTask_SetIsChased();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetIsChased) { return 0; }
