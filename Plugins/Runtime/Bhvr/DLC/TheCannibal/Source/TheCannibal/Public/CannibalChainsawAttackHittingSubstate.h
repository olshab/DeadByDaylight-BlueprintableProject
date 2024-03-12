#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "CannibalChainsawAttackHittingSubstate.generated.h"

UCLASS(Blueprintable)
class THECANNIBAL_API UCannibalChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackHittingSubstate) { return 0; }
