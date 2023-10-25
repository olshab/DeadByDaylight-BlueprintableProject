#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AIHasExhaustionPerkCondition.h"
#include "KillerFilterItem.h"
#include "AITunableParameter.h"
#include "AISkill_Interaction_BloodRush.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_BloodRush : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAIHasExhaustionPerkCondition> ExhaustionPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerFilterItem> RiskyKillerFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AfterExhaustionMinimumDelaySeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinimumRemainingExhaustionCooldownSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinimumDistanceFromKiller;

public:
	UAISkill_Interaction_BloodRush();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_BloodRush) { return 0; }
