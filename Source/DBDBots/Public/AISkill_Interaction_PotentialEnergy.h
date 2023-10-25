#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_GeneratorSecondaryInteraction.h"
#include "AISkill_Interaction_PotentialEnergy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_PotentialEnergy : public UAISkill_Interaction_GeneratorSecondaryInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DangerousGeneratorsRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SafeGeneratorsRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxGeneratorRepairPercentToUseTokens;

public:
	UAISkill_Interaction_PotentialEnergy();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_PotentialEnergy) { return 0; }
