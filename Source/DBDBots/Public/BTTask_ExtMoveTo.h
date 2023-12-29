#pragma once

#include "CoreMinimal.h"
#include "MovementModeNearActor.h"
#include "EExtMoveToStrafeFocusOptions.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECharacterMovementTypes.h"
#include "BTTask_ExtMoveTo.generated.h"

class AActor;

UCLASS(Blueprintable)
class DBDBOTS_API UBTTask_ExtMoveTo : public UBTTask_MoveTo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStrafeFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EExtMoveToStrafeFocusOptions StrafeFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrafeFocusPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StrafeNearFocusModeUnderDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntermittentOnStrafeFocusInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntermittentOnStrafeFocusDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntermittentOffStrafeFocusInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntermittentOffStrafeFocusDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndMoveStrafeFocusPrecisionAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StrafeFocusOwnerOnComponentBBKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes ToGoalMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterMovementTypes NearGoalMovementMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearGoalModeUnderDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NormalMoveUnderNavLinkDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIgnoreGroupAvoidance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlockedCheckInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BlockedContinueTimes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlockedSpeedPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MaxTriesToRepathAroundBlocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMovementModeNearActor> MovementModesNearActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RepathInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseAccelerationForPaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathReachedPointRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearPathFilterRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName UseContextualAcceptableRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FindRelevantDangerInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateTraverseStatesInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FailTaskOnUndodgeableDangerObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreDangerObjects;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, bool> _seenActorsMap;

public:
	UBTTask_ExtMoveTo();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_ExtMoveTo) { return 0; }
