#pragma once

#include "CoreMinimal.h"
#include "BaseLockerItem.h"
#include "EK28LockbarState.h"
#include "TagStateBool.h"
#include "K28Lockbar.generated.h"

class ADBDPlayer;
class UDBDSkeletalMeshComponentBudgeted;
class UStaticMesh;
class UMontagePlayer;
class UAnimationMontageSlave;
class UStaticMeshComponent;
class UBoxComponent;
class UBaseActorAttackableComponent;

UCLASS(Blueprintable)
class AK28Lockbar : public ABaseLockerItem
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_State)
	EK28LockbarState _state;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UStaticMesh* _lockbarStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _staticLockMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _boxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBaseActorAttackableComponent* _lockAttackableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationMontageSlave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isLocked;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_State();

	UFUNCTION(BlueprintCallable)
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerLockbarBreak();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetLockbarHighlightActivationState(bool isHightlightActive);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStateChanged(EK28LockbarState newState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Lockbar();
};

FORCEINLINE uint32 GetTypeHash(const AK28Lockbar) { return 0; }
