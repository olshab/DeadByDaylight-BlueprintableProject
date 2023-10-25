#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K31DroneTimestampedState.h"
#include "Templates/SubclassOf.h"
#include "EK31DroneStateID.h"
#include "K31DroneStateController.generated.h"

class UK31DroneState;
class AGameStateBase;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneStateController : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChangedBlueprintEvent, EK31DroneStateID, oldState, EK31DroneStateID, newState);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStateChangedBlueprintEvent OnStateChangedBlueprintEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UK31DroneState>> _stateClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK31DroneState> _defaultStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGameStateBase* _gameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_States, meta=(AllowPrivateAccess=true))
	TArray<UK31DroneState*> _states;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FK31DroneTimestampedState _local_currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuthorityRepCurrentState, Transient, meta=(AllowPrivateAccess=true))
	FK31DroneTimestampedState _authority_RepCurrentState;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_States();

	UFUNCTION(BlueprintCallable)
	void OnRep_AuthorityRepCurrentState();

public:
	UFUNCTION(BlueprintPure)
	EK31DroneStateID GetPreviousStateID() const;

	UFUNCTION(BlueprintPure)
	EK31DroneStateID GetCurrentStateID() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneStateController();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneStateController) { return 0; }
