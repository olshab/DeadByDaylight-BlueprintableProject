#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ChainPlayerMovementStatusEffect.h"
#include "ChainKillerMovementStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _backwardMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _backwardMovementAngle;

public:
	UChainKillerMovementStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UChainKillerMovementStatusEffect) { return 0; }
