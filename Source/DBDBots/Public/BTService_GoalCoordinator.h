#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "AITunableParameter.h"
#include "GameplayTagContainer.h"
#include "AIGoalWeightContainer.h"
#include "BTService_GoalCoordinator.generated.h"

class UObject;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_GoalCoordinator : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GoalChangeWeightBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBLockedIntoGoal;

	UPROPERTY(EditAnywhere)
	FGameplayTag AISkillFindContext;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FAIGoalWeightContainer> _managedGoals;

public:
	UBTService_GoalCoordinator();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_GoalCoordinator) { return 0; }
