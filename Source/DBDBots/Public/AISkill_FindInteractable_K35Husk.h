#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_K35Husk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K35Husk : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerToHuskWeightPenaltyAtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerToHuskWeightMaxDistance;

public:
	UAISkill_FindInteractable_K35Husk();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K35Husk) { return 0; }
