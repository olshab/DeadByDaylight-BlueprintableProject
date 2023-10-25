#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "AIPointOfInterestTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "DeathBedInteractable.generated.h"

class UBoxComponent;
class UChargeableComponent;
class ACamperPlayer;
class UAIPerceptionStimuliSourceComponent;
class UMontagePlayer;
class USceneComponent;
class UDBDSkeletalMeshComponentBudgeted;
class UDeathBedAntiCampComponent;
class UAnimationMontageSlave;
class UAnimMontage;
class UPrimitiveComponent;
class AActor;
class ADeathBedInteractable;

UCLASS(Blueprintable)
class THEEXECUTIONER_API ADeathBedInteractable : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _inDeathBedCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _rescueChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _deathBedSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _interactionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _playerOverlapZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _deathBedCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationMontageSlave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimMontage* _montageToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _rescuerSnapPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDeathBedAntiCampComponent* _deathBedAnticampComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _anticampDrainCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

private:
	UFUNCTION(BlueprintCallable)
	void TeleportCamperToDeathBed(bool shouldActivate);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartPlayerAbsorbedByGround();

	UFUNCTION(BlueprintCallable)
	void SetInDeathBedCamper(ACamperPlayer* camperPlayer);

private:
	UFUNCTION(BlueprintCallable)
	void PlayerOverlapZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void PlayerOverlapZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSkillCheckFailed_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnSkillCheckFailed();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRescueCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnRelocateStart_Cosmetic();

public:
	UFUNCTION(BlueprintCallable)
	void OnDeathBedDeathEnd();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RelocateToOtherDeathBed(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer);

public:
	UFUNCTION(BlueprintPure)
	FVector GetRescuerSnapPosition() const;

private:
	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInDeathBedCamper() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_SurvivorSavedFromDeathBed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_DeathBedAppear();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DeathBedDisappear();

	UFUNCTION(BlueprintPure)
	bool CanRescueSurvivor() const;

private:
	UFUNCTION(BlueprintCallable)
	void ActivateDeathBed(const bool value);

public:
	ADeathBedInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ADeathBedInteractable) { return 0; }
