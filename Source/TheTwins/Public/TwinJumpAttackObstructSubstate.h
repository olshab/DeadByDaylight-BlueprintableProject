#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "TwinJumpAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class UTwinJumpAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UTwinJumpAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttackObstructSubstate) { return 0; }
