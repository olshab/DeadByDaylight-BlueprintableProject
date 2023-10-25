#pragma once

#include "CoreMinimal.h"
#include "OniDemonPowerAttackOpenSubstate.h"
#include "OniDemonDashAttackOpenSubstate.generated.h"

UCLASS(Blueprintable)
class THEONI_API UOniDemonDashAttackOpenSubstate : public UOniDemonPowerAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UOniDemonDashAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonDashAttackOpenSubstate) { return 0; }
