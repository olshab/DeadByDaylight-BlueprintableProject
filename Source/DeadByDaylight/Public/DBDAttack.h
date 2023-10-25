#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "DBDAttackTargetTracker.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "StatProperty.h"
#include "EDetectionZone.h"
#include "Templates/SubclassOf.h"
#include "EAttackSubstate.h"
#include "EHitValidatorConfigName.h"
#include "ActionPredictionKey.h"
#include "PostAttackData.h"
#include "AttackSubstateRequestResult.h"
#include "DBDAttack.generated.h"

class UDBDAttackSubstate;
class UAttackableComponent;
class ACharacter;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAttack : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackType _attackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDetectionZone _damageZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDetectionZone _lockZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDetectionZone _obstructionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty _maxAccelerationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _onlyApplyAccelerationMultiplierWhenWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDAttackTargetTracker _targetTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAttackSubstate, TSubclassOf<UDBDAttackSubstate>> _stateClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ACharacter*> _localAlreadyHitTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ADBDPlayer*> _hitTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSet<ADBDPlayer*> _targetsAwaitingServerValidation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EAttackSubstate, UDBDAttackSubstate*> _states;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EHitValidatorConfigName _hitValidationConfigName;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestStateChange(const EAttackSubstate state);

protected:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_HitTarget(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_HitDestroyableActorAttackableComponent(UAttackableComponent* attackableComponent);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ClearTargets();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SendPostHitTargetData(ADBDPlayer* owningKiller, ADBDPlayer* target, const FPostAttackData& attackData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RequestStateChange(const EAttackSubstate state);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HitTarget(ADBDPlayer* target, bool hitCosmeticOnly);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HitAttackableComponent(UAttackableComponent* attackableComponent);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ClearTargets();

protected:
	UFUNCTION(BlueprintCallable)
	void Local_OnMovementChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_ReceiveHitResult(ADBDPlayer* target, bool isValid, FActionPredictionKey predictionKey);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_ReceiveAttackSubstateRequestResult(const FAttackSubstateRequestResult result);

public:
	UDBDAttack();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttack) { return 0; }
