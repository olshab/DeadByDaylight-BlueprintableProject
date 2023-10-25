#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "FSM_State.generated.h"

class UFSM_Transition;
class UFSM_State;
class UFiniteStateMachine;

UCLASS(Blueprintable, Abstract)
class FINITESTATEMACHINE_API UFSM_State : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _stateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UFSM_State> _defaultChildStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UFSM_Transition*> _transitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UFiniteStateMachine* _stateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UFSM_State* _parentState;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UFSM_State* _currentChildState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _startTimestamp;

public:
	UFSM_State();
};

FORCEINLINE uint32 GetTypeHash(const UFSM_State) { return 0; }
