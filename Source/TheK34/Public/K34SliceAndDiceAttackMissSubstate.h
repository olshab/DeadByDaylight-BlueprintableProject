#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "K34SliceAndDiceAttackMissSubstate.generated.h"

UCLASS(Blueprintable)
class UK34SliceAndDiceAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UK34SliceAndDiceAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttackMissSubstate) { return 0; }
