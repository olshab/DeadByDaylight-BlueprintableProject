#pragma once

#include "CoreMinimal.h"
#include "AIRoll.h"
#include "PathStrategy_Flee.h"
#include "EAIDifficultyLevel.h"
#include "GameStateEvadeLoopStrategyMapContainer.h"
#include "EAIFleeLoopStrategy.h"
#include "PathStrategy_FleeLoop.generated.h"

class UPathBuilder_EvadeLoop;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLoop : public UPathStrategy_Flee
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDifficultyLevel, FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TMap<EAIFleeLoopStrategy, UPathBuilder_EvadeLoop*> FleeLoopStrategyPathBuilders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CanBranchUnderEndPathDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIFleeLoopStrategy, FAIRoll> BranchRolls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectLoopBranchUnderEndPointsDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectBranchPointNearerHostileSourceDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RejectBranchUnderNavLinkDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AddDistanceToRequiredBranchEvadeGap;

public:
	UPathStrategy_FleeLoop();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_FleeLoop) { return 0; }
