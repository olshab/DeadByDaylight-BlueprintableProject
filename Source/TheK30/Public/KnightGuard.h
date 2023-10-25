#pragma once

#include "CoreMinimal.h"
#include "DBDPlayer.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "EGuardHuntEndReason.h"
#include "KnightGuard.generated.h"

class UGuardAttackableComponent;
class UGuardAttackComponent;
class AK30Power;
class ASlasherPlayer;
class USceneComponent;
class UGuardHuntComponent;
class AGuardFlag;
class UCapsuleComponent;
class UGuardPatrolComponent;
class AActor;
class AGuardController;
class UAnimationMontageSlave;

UCLASS(Blueprintable)
class AKnightGuard : public ADBDPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _attackZonePivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _guardNoiseEventTimeInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _guardNoiseEventRange;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsActive, meta=(AllowPrivateAccess=true))
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwningKiller, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AK30Power* _killerPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGuardFlag> _flagClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	AGuardFlag* _guardFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UGuardAttackComponent> _attackComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGuardAttackComponent* _attackComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UGuardAttackableComponent* _attackableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _attackableCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UGuardHuntComponent> _huntComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UGuardHuntComponent* _huntComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UGuardPatrolComponent> _patrolComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UGuardPatrolComponent* _patrolComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AGuardController> _controllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _gravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _patrolMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _patrolStartupDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _patrolDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _huntMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _huntDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _orderDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _flagActivationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shouldInflictBleed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _spawningVisionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _patrollingVisionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _palletAndVaultsSlowedDownSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _palletAndVaultsSlowDownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _immediateGeneratorRegressionPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _huntAuraVisibilityMinDistanceToKiller;

	UPROPERTY(EditAnywhere)
	FGameplayTag _guardHitSurvivorScoreEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _guardDetectSurvivorScoreEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _guardBreakInteractableEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _guardChaseEndedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _guardAnimTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<AActor*> _overlappingSurvivorsAndVaults;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OwningKiller();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsActive(bool previousIsActive);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPatrolEnded(ADBDPlayer* foundSurvivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnOrderEnded();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CosmeticHuntEnded(EGuardHuntEndReason reason);

	UFUNCTION(BlueprintPure)
	float GetPatrollingVisionRangeBaseValue() const;

	UFUNCTION(BlueprintPure)
	float GetPatrolDuration() const;

	UFUNCTION(BlueprintPure)
	UGuardPatrolComponent* GetPatrolComponent() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

	UFUNCTION(BlueprintPure)
	float GetOrderDuration() const;

	UFUNCTION(BlueprintPure)
	float GetImmediateGeneratorRegressionPercent() const;

	UFUNCTION(BlueprintPure)
	float GetHuntDuration() const;

	UFUNCTION(BlueprintPure)
	float GetHuntAuraVisibilityMinDistanceToKiller() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopOverlappingVaultOrSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartOverlappingVaultOrSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowGuard();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPatrolStarted();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPatrolEnded(ADBDPlayer* foundSurvivor);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrderStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrderEnded();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntTeleportStarted(float duration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHuntEnded(EGuardHuntEndReason reason);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGuardVisionRadiusChanged(bool isVisible, float radius, float angle);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HuntChaseStarted();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_HideGuard();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AKnightGuard();
};

FORCEINLINE uint32 GetTypeHash(const AKnightGuard) { return 0; }
