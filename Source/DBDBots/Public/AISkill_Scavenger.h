#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AISkill_Scavenger.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Scavenger : public UAISkill
{
	GENERATED_BODY()

public:
	UAISkill_Scavenger();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Scavenger) { return 0; }
