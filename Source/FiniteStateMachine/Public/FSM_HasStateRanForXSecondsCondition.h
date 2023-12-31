#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "FSM_Condition.h"
#include "FSM_HasStateRanForXSecondsCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFSM_HasStateRanForXSecondsCondition : public UFSM_Condition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minTimeInSecondsToSatisfyCondition;

public:
	UFSM_HasStateRanForXSecondsCondition();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_HasStateRanForXSecondsCondition) { return 0; }
