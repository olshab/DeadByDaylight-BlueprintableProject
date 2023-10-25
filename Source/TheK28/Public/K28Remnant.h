#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "K28TeleportTarget.h"
#include "StunnableInterface.h"
#include "GameFramework/Actor.h"
#include "AnimationMontageDescriptor.h"
#include "DBDGenericTeamAgentInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EK28RemnantState.h"
#include "K28Remnant.generated.h"

class UCurveFloat;
class UDBDSkeletalMeshComponentBudgeted;
class UCapsuleComponent;
class UAnimationMontageSlave;
class UMontagePlayer;
class UAIPerceptionStimuliSourceComponent;
class UDBDOutlineComponent;
class UK28RemnantOutlineUpdateStrategy;
class ASlasherPlayer;
class ACamperPlayer;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AK28Remnant : public AActor, public IK28TeleportTarget, public IStunnableInterface, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _teleportToRemnantSpeedCurve_Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _teleportToRemnantSpeedCurve_Penalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _capsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK28RemnantOutlineUpdateStrategy* _remnantOutlineStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minDistanceFromHookedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _renmantDeactivationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _remnantDestructionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _slowTeleportToRenmantAnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _fastTeleportToRenmantAnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RemnantState, meta=(AllowPrivateAccess=true))
	EK28RemnantState _remnantState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_RemnantState();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerTeleportStart(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportToRemnant(ASlasherPlayer* killer, const FRotator& teleportRotation, bool isAnimationSlowed);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SurvivorDestroyedRemnant(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DeactivateRemnant();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ActivateRemnant(const FVector& location, const FRotator& rotation);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorDestroyedRemnant(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportationStartVFX(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportationPerformedVFX(ASlasherPlayer* killer, bool isSlowTeleportation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantStateChanged(EK28RemnantState remnantState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantDeactivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRemnantActivated();

private:
	UFUNCTION()
	void Authority_OnCollisionDetected(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Remnant();
};

FORCEINLINE uint32 GetTypeHash(const AK28Remnant) { return 0; }
