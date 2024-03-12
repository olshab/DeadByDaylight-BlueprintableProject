#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Interactable.h"
#include "EControlStationState.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K33ControlStation.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class UK33ControlStationTurretSpawnerOutlineUpdateStrategy;
class UBoxComponent;
class AK33ExitTunnelInteractable;
class UInteractor;
class UDBDOutlineComponent;
class UK33ControlStationTunnelEntranceOutlineUpdateStrategy;
class AK33TunnelBlock;
class UMontagePlayer;
class UAnimationMontageSlave;
class AK33Turret;

UCLASS(Blueprintable)
class THEK33_API AK33ControlStation : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_TunnelEntranceSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_turretSpawnerSection;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK33ControlStationTurretSpawnerOutlineUpdateStrategy* _outlineStrategy_TurretSpawnerSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK33ControlStationTunnelEntranceOutlineUpdateStrategy* _outlineStrategy_TunnelEntranceSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent_tunnelEntranceSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent_turretSpawnerSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _interactionCollisionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK33TunnelBlock* _linkedTunnelBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AK33ExitTunnelInteractable> _exitTunnelInteractableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ExitTunnelInteractable, Transient, meta=(AllowPrivateAccess=true))
	AK33ExitTunnelInteractable* _exitTunnelInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer_turretSpawnerSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer_tunnelEntranceSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationSlave_turretSpawnerSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAnimationMontageSlave* _animationSlave_tunnelEntranceSection;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	TWeakObjectPtr<AK33Turret> _linkedTurret;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentState, Transient, meta=(AllowPrivateAccess=true))
	EControlStationState _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _turretSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _spawningDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _turretAvailabilityCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _worldTimeAtCooldownStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _malfunctionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _blockExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsMalfunctioning, meta=(AllowPrivateAccess=true))
	bool _isMalfunctioning;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsMalfunctioning();

	UFUNCTION(BlueprintCallable)
	void OnRep_ExitTunnelInteractable();

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentState(EControlStationState oldState);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetKillerExitTunnelEndLocation() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateControlStationCooldown(float cooldownElapsedTimePercent);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopControlStationMalfunctionReaction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartControlStationMalfunctionReaction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetTunnelCapVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretInPoolCountChanged(const int32 turretCount);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlStationExitingState(EControlStationState exitingState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlStationEnteringState(EControlStationState enteringState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33ControlStation();
};

FORCEINLINE uint32 GetTypeHash(const AK33ControlStation) { return 0; }
