#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsNearestThan.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsNearestThan : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFrom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CompareWithConstantDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThanDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBThan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AddDistanceBuffer;

public:
	UBTDecorator_IsNearestThan();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsNearestThan) { return 0; }
