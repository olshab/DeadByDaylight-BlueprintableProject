#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "K24WhipAttackOpenSubstate.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class THEK24_API UK24WhipAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _lvl3SpeedCurve;

public:
	UK24WhipAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttackOpenSubstate) { return 0; }
