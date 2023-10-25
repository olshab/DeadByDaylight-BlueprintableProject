#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataTableDropdown.h"
#include "AICleansePerkCondition.generated.h"

USTRUCT(BlueprintType)
struct FAICleansePerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown CleansePerkID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> DisplayPercentQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayPercentValue;

public:
	DBDBOTS_API FAICleansePerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAICleansePerkCondition) { return 0; }
