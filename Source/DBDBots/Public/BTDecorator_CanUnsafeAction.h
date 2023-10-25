#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CanUnsafeAction.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_CanUnsafeAction : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionUsesItemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionIsSelfInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBUnsafeActionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBGoalInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtraHealthyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtraInjuredTime;

public:
	UBTDecorator_CanUnsafeAction();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CanUnsafeAction) { return 0; }
