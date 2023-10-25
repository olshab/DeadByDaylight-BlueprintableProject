#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "ModifierValueData.h"
#include "BTDecorator_GameplayModifierValue.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_GameplayModifierValue : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModifierValueData ModifierValueData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CompareToValue;

public:
	UBTDecorator_GameplayModifierValue();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_GameplayModifierValue) { return 0; }
