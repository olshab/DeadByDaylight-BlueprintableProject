#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_Reassurance.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_Reassurance : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> ReassuranceStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxHookTimeGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HumanAllyHookedGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IdealKillerDistanceFromHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxKillerProximityWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BotDangerStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BotInjuredStateGoalWeight;

private:
	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<ACamperPlayer>> _hookedAndNotReassuredSurvivors;

public:
	UAISkill_FindInteractable_Reassurance();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Reassurance) { return 0; }
