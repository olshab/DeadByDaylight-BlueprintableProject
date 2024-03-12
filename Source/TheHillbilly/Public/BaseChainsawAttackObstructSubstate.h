#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "BaseChainsawAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class THEHILLBILLY_API UBaseChainsawAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UBaseChainsawAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttackObstructSubstate) { return 0; }
