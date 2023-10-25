#pragma once

#include "CoreMinimal.h"
#include "AIGoalGeneratorInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractable.generated.h"

class UNavigationQueryFilter;
class AInteractable;
class ADBDAIBTController;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_FindInteractable : public UBTService, public IAIGoalGeneratorInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBSearchAround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchHeightAmplifierActivationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SearchHeightAmplifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RegisterAsDiscoveredWhenFound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBOnlyFromActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfInPressureZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RejectCooldownContextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AbandonIfInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfFocusedByOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfNotFocusedBySelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreFocusFilterInEndgameCollapse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectIfNotInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreSightFilterIfDiscovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreSightFilterIfInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectAboveRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreRangeFilterIfDiscovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnoreRangeFilterIfInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractableLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInteractableObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProjectGoalLocationToNavigationExtent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AInteractable* _goalInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

public:
	UBTService_FindInteractable();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractable) { return 0; }
