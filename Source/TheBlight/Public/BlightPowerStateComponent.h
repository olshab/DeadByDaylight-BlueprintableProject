#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "BlightPowerCollisionDelegate.h"
#include "BlightPowerStateInterface.h"
#include "Templates/SubclassOf.h"
#include "EWallGrabState.h"
#include "BlightPowerStateComponent.generated.h"

class UTimerObject;
class UInteractionDefinition;
class UBlightPowerState;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBlightPowerStateComponent : public UActorComponent, public IBlightPowerStateInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FBlightPowerCollisionDelegate OnPowerCollided;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UBlightPowerState>> _blightPowerStateClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _canDashCheckCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _canDashCheckCollisionHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _canDashCheckCollisionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _canWallGrabPlayerTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _blightLethalDashDodgeRadius;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _powerInteractionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_StateTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _stateTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UBlightPowerState*> _blightPowerStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBlightPowerState* _currentBlightPowerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DashTokens, Transient, meta=(AllowPrivateAccess=true))
	uint8 _dashTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maximumDashTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _tokenChargeRate;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetWallGrabState(const EWallGrabState newState);

public:
	UFUNCTION(BlueprintCallable)
	void ResetDashTokens();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_StateTimer();

	UFUNCTION(BlueprintCallable)
	void OnRep_DashTokens();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_SetWallGrabState(const EWallGrabState newState);

public:
	UFUNCTION(BlueprintPure)
	float GetStateTimeRemaining() const;

	UFUNCTION(BlueprintPure)
	UTimerObject* GetStateTimer() const;

	UFUNCTION(BlueprintPure)
	float GetStateTimeElapsed() const;

	UFUNCTION(BlueprintPure)
	UBlightPowerState* GetPowerStateByEnum(const EWallGrabState stateEnum) const;

	UFUNCTION(BlueprintPure)
	EWallGrabState GetPowerState() const;

	UFUNCTION(BlueprintPure)
	float GetLookAngleDegrees() const;

	UFUNCTION(BlueprintPure)
	uint8 GetDashTokensRemaining() const;

	UFUNCTION(BlueprintPure)
	UBlightPowerState* GetCurrentPowerState() const;

	UFUNCTION(BlueprintPure)
	bool CanDash() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlightPowerStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateComponent) { return 0; }
