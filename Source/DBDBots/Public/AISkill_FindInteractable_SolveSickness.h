#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_SolveSickness.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BaseGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UrgencyGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InteractingGoalPenaltyWeight;

public:
	UAISkill_FindInteractable_SolveSickness();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SolveSickness) { return 0; }
