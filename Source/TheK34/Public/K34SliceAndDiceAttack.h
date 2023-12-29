#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "K34SliceAndDiceAttack.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34SliceAndDiceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackZoneScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _mouseMaxTurnAngleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _controllerMaxTurnAngleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _turnRateLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _endChaseAfterHitBuffer;

public:
	UK34SliceAndDiceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK34SliceAndDiceAttack) { return 0; }
