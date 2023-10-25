#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "Components/ActorComponent.h"
#include "AIGoal.h"
#include "AIGoalWeightContainer.h"
#include "DBDAIGoalComponent.generated.h"

class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIGoalComponent : public UActorComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FAIGoal> _activeGoals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, FAIGoalWeightContainer> _foundWeightedGoals;

public:
	UDBDAIGoalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIGoalComponent) { return 0; }
