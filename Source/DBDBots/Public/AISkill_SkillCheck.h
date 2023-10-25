#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AITunableParameter.h"
#include "AISkill_SkillCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_SkillCheck : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxSuccessLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HalfSuccessLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckDifficultyCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckUndesiredZonePenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckDifficultyModifierReversed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckDifficultyModifierOffCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckDifficultyModifierSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SkillCheckDifficultyModifierWarningSound;

public:
	UAISkill_SkillCheck();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_SkillCheck) { return 0; }
