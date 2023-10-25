#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFiniteStateMachineStatus.h"
#include "Templates/SubclassOf.h"
#include "FiniteStateMachine.generated.h"

class UFSM_State;
class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class FINITESTATEMACHINE_API UFiniteStateMachine : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UFSM_State> _defaultStateClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UFSM_State* _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EFiniteStateMachineStatus _currentStateMachineStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _stateMachineOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UFSM_State*> _stateInstances;

public:
	UFiniteStateMachine();
};

FORCEINLINE uint32 GetTypeHash(const UFiniteStateMachine) { return 0; }
