#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K24WhipAttackHittingSubstate.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class THEK24_API UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackSphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerAttackBreakObjectLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _powerCanBreakObjectAfterAPlayerDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _whipMovementFromOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _whipMovementToOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _whipMovementCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _lvl3SpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _whipGroundDetectionOffset;

public:
	UK24WhipAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttackHittingSubstate) { return 0; }
