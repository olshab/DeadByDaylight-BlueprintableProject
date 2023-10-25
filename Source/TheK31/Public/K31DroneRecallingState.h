#pragma once

#include "CoreMinimal.h"
#include "K31DroneState.h"
#include "DBDTunableRowHandle.h"
#include "K31DroneRecallingState.generated.h"

UCLASS(Blueprintable)
class THEK31_API UK31DroneRecallingState : public UK31DroneState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _recallingDuration;

public:
	UK31DroneRecallingState();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneRecallingState) { return 0; }
