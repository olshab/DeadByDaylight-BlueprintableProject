#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_DashAttack.h"
#include "AISkill_InteractionTarget_DashAttack_Demogorgon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DashAttack_Demogorgon : public UAISkill_InteractionTarget_DashAttack
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DashAttack_Demogorgon();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashAttack_Demogorgon) { return 0; }
