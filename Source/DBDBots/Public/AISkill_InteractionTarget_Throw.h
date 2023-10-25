#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AITunableParameter.h"
#include "EAIThrowPredictionModes.h"
#include "EAIThrowProjectileModes.h"
#include "AISkill_InteractionTarget_Throw.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_Throw : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIThrowPredictionModes ThrowPredictionMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAddPitchAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIThrowProjectileModes ThrowProjectileMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HoldInputTimeRandDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PitchAngleRandDeviation;

public:
	UAISkill_InteractionTarget_Throw();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_Throw) { return 0; }
