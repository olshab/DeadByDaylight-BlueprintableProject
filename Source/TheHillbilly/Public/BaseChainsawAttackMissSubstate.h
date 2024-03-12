#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "BaseChainsawAttackMissSubstate.generated.h"

UCLASS(Blueprintable)
class THEHILLBILLY_API UBaseChainsawAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UBaseChainsawAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBaseChainsawAttackMissSubstate) { return 0; }
