#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K33TailAttackInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33TailAttackInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _interactionViewPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _interactionViewPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cancelAttackMovementSlowdownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _cancelAttackMovementSlowdownCurve;

public:
	UK33TailAttackInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33TailAttackInteraction) { return 0; }
