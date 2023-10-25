#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindObject_K32EmpTarget.generated.h"

class AActor;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindObject_K32EmpTarget : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> ValidGoalObjectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearGoalPodHorizontalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearGoalPodVerticalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearGoalSurvivorHorizontalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearGoalSurvivorVerticalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OtherSurvivorNearTargetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshTargetLocationExtents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckDynamicSubtreeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBOriginalFocusedActor;

public:
	UBTService_FindObject_K32EmpTarget();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_K32EmpTarget) { return 0; }
