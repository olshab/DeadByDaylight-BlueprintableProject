#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Trap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Trap : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UAISkill_FindCollectable_Trap();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_Trap) { return 0; }
