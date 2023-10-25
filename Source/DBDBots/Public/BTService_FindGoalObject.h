#pragma once

#include "CoreMinimal.h"
#include "AIGoalGeneratorInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindGoalObject.generated.h"

class UNavigationQueryFilter;
class ADBDAIBTController;

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UBTService_FindGoalObject : public UBTService, public IAIGoalGeneratorInterface
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
	FBlackboardKeySelector BBObjectLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalBasicWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightAtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightAtEndgameStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalWeightAtEndgameEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProjectGoalLocationToNavigationExtent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDAIBTController* _aiOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool shouldHideBBKeysInEditor;

public:
	UBTService_FindGoalObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindGoalObject) { return 0; }
