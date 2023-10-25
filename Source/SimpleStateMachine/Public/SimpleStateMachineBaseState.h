#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SimpleStateMachineBaseState.generated.h"

class USimpleStateMachine;

UCLASS(Blueprintable, Abstract)
class SIMPLESTATEMACHINE_API USimpleStateMachineBaseState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	USimpleStateMachine* _stateMachine;

public:
	USimpleStateMachineBaseState();
};

FORCEINLINE uint32 GetTypeHash(const USimpleStateMachineBaseState) { return 0; }
