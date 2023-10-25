#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "DBDTunableRowHandle.h"
#include "FrenzyAttackSuccessSubstate.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class THELEGION_API UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _healthyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _injuredTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bleedoutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _healthyCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _injuredCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _bleedoutCurve;

public:
	UFrenzyAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzyAttackSuccessSubstate) { return 0; }
