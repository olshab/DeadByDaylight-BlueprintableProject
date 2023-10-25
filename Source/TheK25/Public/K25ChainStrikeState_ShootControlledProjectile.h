#pragma once

#include "CoreMinimal.h"
#include "K25ChainStrikeBaseState.h"
#include "K25ChainStrikeState_ShootControlledProjectile.generated.h"

UCLASS(Blueprintable, Abstract)
class UK25ChainStrikeState_ShootControlledProjectile : public UK25ChainStrikeBaseState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minimumThrottleTimeForInputServerCall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inputResetSpeed;

public:
	UK25ChainStrikeState_ShootControlledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeState_ShootControlledProjectile) { return 0; }
