#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "AttackDelegatePair.h"
#include "EAttackType.h"
#include "DBDAttackerComponent.generated.h"

class UDBDAttack;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAttackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackPhaseChangedDelegate, const EAttackType, attackType);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Transient)
	FOnAttackPhaseChangedDelegate OnAttackStartDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Transient)
	FOnAttackPhaseChangedDelegate OnAttackFinishDelegate;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _autonomousHitPredictionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UDBDAttack*> _attacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDAttack* _requestedAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDAttack* _currentAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FAttackDelegatePair> _attackHitDelegates;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_StoreAttack(const EAttackType attackType);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StoreAttack(const EAttackType attackType);

public:
	UFUNCTION(BlueprintCallable)
	void Local_RequestAttack(const EAttackType attackType);

	UFUNCTION(BlueprintPure)
	bool IsAttackTransitionRequested(const EAttackType attackType) const;

	UFUNCTION(BlueprintPure)
	bool IsAttacking() const;

	UFUNCTION(BlueprintPure)
	bool IsAnyAttackTransitionRequested() const;

public:
	UDBDAttackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackerComponent) { return 0; }
