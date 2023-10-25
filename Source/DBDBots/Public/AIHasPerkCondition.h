#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataTableDropdown.h"
#include "AIHasPerkCondition.generated.h"

USTRUCT(BlueprintType)
struct FAIHasPerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown PerkID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CompareDisplayPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> DisplayPercentQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayPercentValue;

public:
	DBDBOTS_API FAIHasPerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAIHasPerkCondition) { return 0; }
