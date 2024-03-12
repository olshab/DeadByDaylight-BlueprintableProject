#pragma once

#include "CoreMinimal.h"
#include "AISkill_LeaveGeneratorInteraction.h"
#include "EAITerrorLevel.h"
#include "AISkill_LeaveGenerator_SetGeneratorTrap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_LeaveGenerator_SetGeneratorTrap : public UAISkill_LeaveGeneratorInteraction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGeneratorRepairPercentToSetTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAITerrorLevel TerrorLevelToSetTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAITerrorLevel TerrorLevelToSetTrapImmediately;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TerrorLevelCloseRange;

public:
	UAISkill_LeaveGenerator_SetGeneratorTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_LeaveGenerator_SetGeneratorTrap) { return 0; }
