#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AITunableParameter.h"
#include "AISkill_Strafe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Strafe : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartMaxRangeAgainstRangedHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopMaxRangeAgainstRangedHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StrafeBackwardRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StrafeFowardRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IgnoreUnderNavLinkStartRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PauseStrafeOnAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StrafeHoldInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StrafeHoldDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StrafePauseInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StrafePauseDeviation;

public:
	UAISkill_Strafe();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Strafe) { return 0; }
