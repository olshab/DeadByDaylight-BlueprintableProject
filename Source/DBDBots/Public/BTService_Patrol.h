#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "UObject/NoExportTypes.h"
#include "BTService_Patrol.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_Patrol : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBFilterKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshFindLocationExtents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinPatrolInvestigationDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PatrolPointsValidityCheckInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBPatrolPointOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBPatrolLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBGoToNextPatrolLocation;

public:
	UBTService_Patrol();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Patrol) { return 0; }
