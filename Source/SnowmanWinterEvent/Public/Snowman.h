#pragma once

#include "CoreMinimal.h"
#include "ESnowmanDestructionType.h"
#include "GameplayTagContainer.h"
#include "ESnowmanState.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "Engine/EngineTypes.h"
#include "SnowmanSpawnData.h"
#include "GameEventData.h"
#include "UObject/NoExportTypes.h"
#include "Snowman.generated.h"

class UInteractor;
class ACamperPlayer;
class UChargeableComponent;
class UDBDOutlineComponent;
class UDBDSkeletalMeshComponentBudgeted;
class ADBDPlayer;
class ASlasherPlayer;
class UCapsuleComponent;
class UPrimitiveComponent;
class UBaseActorAttackableComponent;
class ASnowman;
class AActor;

UCLASS(Blueprintable)
class SNOWMANWINTEREVENT_API ASnowman : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToRespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxRespawnsAfterKillerAttackWhileOccupied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToBeDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _highFiveCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attachToPlayerDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SnowmanState, Transient, meta=(AllowPrivateAccess=true))
	ESnowmanState _snowmanState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SnowmanDestructionType, Transient, meta=(AllowPrivateAccess=true))
	ESnowmanDestructionType _snowmanDestructionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PlayerUsingSnowman, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _playerUsingThisSnowman;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _snowmanSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _snowmanOutlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _snowmanCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _snowmanHandCapsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _hideInSnowmanInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _snowmanInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _snowmanInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBaseActorAttackableComponent* _attackableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAcquiredFromPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsMoving, Transient, meta=(AllowPrivateAccess=true))
	bool _isMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HighFiveFollower, Transient, meta=(AllowPrivateAccess=true))
	ASnowman* _highFiveFollower;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SnowmanState();

	UFUNCTION(BlueprintCallable)
	void OnRep_SnowmanDestructionType();

	UFUNCTION(BlueprintCallable)
	void OnRep_PlayerUsingSnowman();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsMoving();

	UFUNCTION(BlueprintCallable)
	void OnRep_HighFiveFollower();

public:
	UFUNCTION()
	void OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, ADBDPlayer* playerInSnowman);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SpawnSnowman(FSnowmanSpawnData spawnData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetSnowmanHiddenInGame(bool isHidden);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingUsedByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSnowmanStartBeingControlledByKiller(ASlasherPlayer* killerUsingSnowman);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DrawDebugCollisionCheck(FVector boxExtent, float debugLifetime) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetSnowmanMaterialVariant(const int32 materialVariantIndex);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingUsedByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanStartBeingControlledByKiller(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanSpawned();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanHighFive(ASnowman* otherSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByKillerCancelExit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByKillerAttackExit(ASlasherPlayer* killerUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(ASlasherPlayer* killerAttackingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(ACamperPlayer* survivorUsingSnowman, ASlasherPlayer* killerAttackingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(ACamperPlayer* survivorUsingSnowman);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(ASlasherPlayer* killerAttackingSnowman);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSnowmanHandOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnSnowmanHandOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASnowman();
};

FORCEINLINE uint32 GetTypeHash(const ASnowman) { return 0; }
