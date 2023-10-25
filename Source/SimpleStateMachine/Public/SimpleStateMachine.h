#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SimpleStateMachine.generated.h"

class USimpleStateMachineBaseState;
class USimpleStateMachineBaseTransition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SIMPLESTATEMACHINE_API USimpleStateMachine : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USimpleStateMachineBaseState> _defaultStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<TSubclassOf<USimpleStateMachineBaseState>> _stateClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<TSubclassOf<USimpleStateMachineBaseTransition>> _transitionsClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USimpleStateMachineBaseState* _defaultState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USimpleStateMachineBaseState* _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, USimpleStateMachineBaseState*> _states;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _debugPrintState;

public:
	USimpleStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const USimpleStateMachine) { return 0; }
