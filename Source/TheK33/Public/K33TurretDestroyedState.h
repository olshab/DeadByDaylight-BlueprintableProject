#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "TunableStat.h"
#include "K33TurretDestroyedState.generated.h"

UCLASS(Blueprintable)
class UK33TurretDestroyedState : public UBaseReplicatedState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _destroyedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeBeforeDisappearance;

public:
	UK33TurretDestroyedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDestroyedState) { return 0; }
