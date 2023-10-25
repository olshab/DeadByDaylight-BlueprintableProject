#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CompareInteractorCharge.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_CompareInteractorCharge : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> ChargePercentQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChargePercentValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractorObj;

public:
	UBTDecorator_CompareInteractorCharge();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CompareInteractorCharge) { return 0; }
