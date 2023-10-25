#pragma once

#include "CoreMinimal.h"
#include "EChainStrikeEndReason.h"
#include "K25ChainStrikeBaseState.h"
#include "K25ChainStrikeState_EndChainStrike.generated.h"

UCLASS(Blueprintable, Abstract)
class UK25ChainStrikeState_EndChainStrike : public UK25ChainStrikeBaseState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChainStrikeEndReason _chainStrikeEndReason;

public:
	UK25ChainStrikeState_EndChainStrike();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeState_EndChainStrike) { return 0; }
