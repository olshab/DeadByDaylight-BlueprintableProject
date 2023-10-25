#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_InLocker.h"
#include "AISkill_Interaction_InLocker_InnerHealing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_InLocker_InnerHealing : public UAISkill_Interaction_InLocker
{
	GENERATED_BODY()

public:
	UAISkill_Interaction_InLocker_InnerHealing();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_InLocker_InnerHealing) { return 0; }
