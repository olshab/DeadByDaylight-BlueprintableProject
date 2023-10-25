#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretBeingRepairedState.generated.h"

UCLASS(Blueprintable)
class UK33TurretBeingRepairedState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretBeingRepairedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretBeingRepairedState) { return 0; }
