#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackHittingSubstate.h"
#include "CannibalChainsawAttackHittingSubstate.generated.h"

UCLASS(Blueprintable)
class THECANNIBAL_API UCannibalChainsawAttackHittingSubstate : public UHillbillyChainsawAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackHittingSubstate) { return 0; }
