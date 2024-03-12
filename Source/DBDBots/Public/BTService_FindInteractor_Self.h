#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_FindInteractor.h"
#include "AISelfHelpInteraction.h"
#include "GameplayTagContainer.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Self.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Self : public UBTService_FindInteractor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsSkillSelfInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAISelfHelpInteraction> SelfHelpInteractions;

	UPROPERTY(EditAnywhere)
	FGameplayTag SelfInteractionContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorProximityRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SurvivorProximityWeightPenalty;

public:
	UBTService_FindInteractor_Self();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Self) { return 0; }
