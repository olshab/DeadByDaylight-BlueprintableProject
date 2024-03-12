#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackObstructSubstate.h"
#include "HillbillyChainsawAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class UHillbillyChainsawAttackObstructSubstate : public UBaseChainsawAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackObstructSubstate) { return 0; }
