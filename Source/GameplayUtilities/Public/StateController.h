#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "StateController.generated.h"

class UBaseReplicatedState;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UStateController : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChangedBlueprintEvent, FGameplayTag, oldState, FGameplayTag, newState);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStateChangedBlueprintEvent OnStateChangedBlueprintEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UBaseReplicatedState>> _stateClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UBaseReplicatedState> _defaultStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_States, meta=(AllowPrivateAccess=true))
	TArray<UBaseReplicatedState*> _states;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBaseReplicatedState* _local_currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AuthorityRepCurrentState, Transient, meta=(AllowPrivateAccess=true))
	UBaseReplicatedState* _authority_RepCurrentState;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_States();

	UFUNCTION(BlueprintCallable)
	void OnRep_AuthorityRepCurrentState();

public:
	UFUNCTION(BlueprintPure)
	FGameplayTag GetCurrentStateID() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStateController();
};

FORCEINLINE uint32 GetTypeHash(const UStateController) { return 0; }
