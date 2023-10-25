#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_GeneratorSecondaryInteraction.h"
#include "EAITerrorLevel.h"
#include "AISkill_Interaction_SetGeneratorTrap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_SetGeneratorTrap : public UAISkill_Interaction_GeneratorSecondaryInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGeneratorRepairPercentToSetTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CheckKillerDistanceInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinKillerApproachingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinKillerApproachingFastStreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAITerrorLevel TerrorLevelToSetTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAITerrorLevel TerrorLevelToSetTrapImmediately;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TerrorLevelCloseRange;

public:
	UAISkill_Interaction_SetGeneratorTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_SetGeneratorTrap) { return 0; }
