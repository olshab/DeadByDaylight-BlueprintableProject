#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_DeadHard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DeadHard : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DeadHard();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DeadHard) { return 0; }
