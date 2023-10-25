#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "AISkill_InteractionTarget_Dash.h"
#include "AISkill_InteractionTarget_DashAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DashAttack : public UAISkill_InteractionTarget_Dash
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DashAttackUnderMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DashAttackUnderMaxHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackType ExpectedAttackType;

public:
	UAISkill_InteractionTarget_DashAttack();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashAttack) { return 0; }
