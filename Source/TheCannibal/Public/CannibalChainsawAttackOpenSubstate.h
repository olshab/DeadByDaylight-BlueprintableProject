#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackOpenSubstate.h"
#include "CannibalChainsawAttackOpenSubstate.generated.h"

UCLASS(Blueprintable)
class THECANNIBAL_API UCannibalChainsawAttackOpenSubstate : public UHillbillyChainsawAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackOpenSubstate) { return 0; }
