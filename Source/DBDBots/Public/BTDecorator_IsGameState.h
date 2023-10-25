#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_IsGameState.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsGameState : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> RemainingObjectiveOp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbRemainingObjectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> SurvivorsLeftOp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbSurvivorsLeft;

public:
	UBTDecorator_IsGameState();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsGameState) { return 0; }
