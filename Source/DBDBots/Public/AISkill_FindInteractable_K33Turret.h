#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_K33Turret.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K33Turret : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter RedeployGeneratorMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UndeployGeneratorMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UndeployCharacterMaxRange;

public:
	UAISkill_FindInteractable_K33Turret();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K33Turret) { return 0; }
