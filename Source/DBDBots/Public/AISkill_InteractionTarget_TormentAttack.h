#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AIRoll.h"
#include "AISkill_InteractionTarget_TormentAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_TormentAttack : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AdvancedAtNbDetectedTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll AdvancedStartRoll;

public:
	UAISkill_InteractionTarget_TormentAttack();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_TormentAttack) { return 0; }
