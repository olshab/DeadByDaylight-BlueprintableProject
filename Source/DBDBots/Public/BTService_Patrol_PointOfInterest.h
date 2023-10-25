#pragma once

#include "CoreMinimal.h"
#include "BTService_Patrol.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_Patrol_PointOfInterest.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_Patrol_PointOfInterest : public UBTService_Patrol
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OnEnterPatrolRefreshPointsDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBMoveAroundPatrolLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveAroundPatrolPointAboveStimulusStrength;

public:
	UBTService_Patrol_PointOfInterest();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Patrol_PointOfInterest) { return 0; }
