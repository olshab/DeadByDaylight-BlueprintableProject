#pragma once

#include "CoreMinimal.h"
#include "K25ChainStrikeBaseState.h"
#include "DBDTunableRowHandle.h"
#include "K25ChainStrikeState_OutOfBodyState.generated.h"

UCLASS(Blueprintable, Abstract)
class UK25ChainStrikeState_OutOfBodyState : public UK25ChainStrikeBaseState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _fovTimeChangeDuration;

public:
	UK25ChainStrikeState_OutOfBodyState();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeState_OutOfBodyState) { return 0; }
