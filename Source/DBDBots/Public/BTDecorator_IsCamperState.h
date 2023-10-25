#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECamperDamageState.h"
#include "EIsCamperStateOnFilter.h"
#include "EImmobilizedState.h"
#include "BTDecorator_IsCamperState.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsCamperState : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECamperDamageState DamageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> DamageOp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EImmobilizedState ImmobilizeState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> ImmobilizeOp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EIsCamperStateOnFilter OnFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EArithmeticKeyOperation::Type> OnOthersFilterOp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbOnOthersCampers;

public:
	UBTDecorator_IsCamperState();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsCamperState) { return 0; }
