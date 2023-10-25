#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Templates/SubclassOf.h"
#include "BTTask_SetRandomNavPoint.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_SetRandomNavPoint : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFromLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBToLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinAroundRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAroundRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNbAttempts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSafeNbAttempts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

public:
	UBTTask_SetRandomNavPoint();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetRandomNavPoint) { return 0; }
