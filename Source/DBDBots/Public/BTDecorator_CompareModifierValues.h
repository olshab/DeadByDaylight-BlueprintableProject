#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "ModifierValueData.h"
#include "BTDecorator_CompareModifierValues.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_CompareModifierValues : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModifierValueData ModifierValueData1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModifierValueData ModifierValueData2;

public:
	UBTDecorator_CompareModifierValues();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CompareModifierValues) { return 0; }
