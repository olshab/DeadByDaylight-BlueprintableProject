#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Camper.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_StateMonitor_Camper : public UBTService_StateMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBDamageState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBImmoblizedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBGuidedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBEscapedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsInInjuredBleedout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBDyingTimerPercentLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBHookTimerPercentLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBHookDrainStage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBItemCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsHoldingEmptyItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBSpecialItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsChased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBWasInStimulusSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBWasBeingAimedAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsBeingAimedAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsBeingAttacked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsChained;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsInPressureZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsInActivatedRBT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsInDeathTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBHasCrowAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBLastTrapSideStepExpirationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBLastAskedToMoveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBPreventDroppingEmptyItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIgnoreGoalPressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmptyItemChargeThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeathTimerEndGamePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaseUnseenMinimumKillerRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaseSeenMinimumKillerRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChasedMinimumScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerAtMinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerDistanceMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerWhenUnknownLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScorePredictedTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerLastKnownDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerMaxDirectionAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreSurvivorWhenVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreSurvivorVisibilityTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerUndetectable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerRangedAndDash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ChasedScoreKillerChaseTarget;

public:
	UBTService_StateMonitor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StateMonitor_Camper) { return 0; }
