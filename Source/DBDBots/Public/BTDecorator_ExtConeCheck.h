#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ExtConeCheck.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_ExtConeCheck : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBConeOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBConeDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBWith;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ConeHalfAngle;

public:
	UBTDecorator_ExtConeCheck();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ExtConeCheck) { return 0; }
