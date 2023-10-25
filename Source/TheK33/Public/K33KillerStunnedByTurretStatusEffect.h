#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K33KillerStunnedByTurretStatusEffect.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33KillerStunnedByTurretStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _movementSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _movementSpeedDuration;

public:
	UK33KillerStunnedByTurretStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerStunnedByTurretStatusEffect) { return 0; }
