#pragma once

#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "DBDTunableRowHandle.h"
#include "BlightPowerStateAdjusting.generated.h"

UCLASS(Blueprintable)
class UBlightPowerStateAdjusting : public UBlightPowerState
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _adjustRotationOnCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _bounceAwayFromCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _smashBreakables;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxDistanceForSurvivorFacing;

public:
	UBlightPowerStateAdjusting();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateAdjusting) { return 0; }
