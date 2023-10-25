#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_K33ControlStation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K33ControlStation : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter GeneratorMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter TurretProximityPenaltyMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter TurretsRemainingWeightBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter TurretProximityWeightPenalty;

public:
	UAISkill_FindInteractable_K33ControlStation();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K33ControlStation) { return 0; }
