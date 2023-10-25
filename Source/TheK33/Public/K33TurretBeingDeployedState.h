#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "K33TurretBeingDeployedState.generated.h"

UCLASS(Blueprintable)
class UK33TurretBeingDeployedState : public UBaseReplicatedState
{
	GENERATED_BODY()

public:
	UK33TurretBeingDeployedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretBeingDeployedState) { return 0; }
