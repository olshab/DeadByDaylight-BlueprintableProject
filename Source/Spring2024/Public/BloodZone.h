#pragma once

#include "CoreMinimal.h"
#include "EBloodZoneState.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "BloodZone.generated.h"

class UDBDOutlineComponent;
class UChargeableComponent;
class UInteractor;
class UStaticMeshComponent;
class UBloodZoneDeactivationInteraction;
class ADBDPlayer;
class UPrimitiveComponent;
class UBloodZoneOutlineUpdateStrategy;
class UBloodZoneActivationInteraction;

UCLASS(Blueprintable)
class ABloodZone : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UStaticMeshComponent* _bloodZoneStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(BindWidgetOptional))
	UBloodZoneOutlineUpdateStrategy* _outlineUpdateStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _bloodZoneInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _bloodZoneInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBloodZoneActivationInteraction* _bloodZoneActivationInteractionSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBloodZoneActivationInteraction* _bloodZoneActivationInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _bloodZoneActivationChargeableSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _bloodZoneActivationChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBloodZoneDeactivationInteraction* _bloodZoneDeactivationInteractionSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBloodZoneDeactivationInteraction* _bloodZoneDeactivationInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _bloodZoneDeactivationChargeableSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _bloodZoneDeactivationChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneActivationInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneActivationInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneDeactivationInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneDeactivationInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneLowerHeightDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _bloodZoneUpperHeightDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerProtectedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorProtectedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _outlineRevealDistance;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_State)
	EBloodZoneState _state;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorDeactivationInteractionEntered(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorActivationInteractionEntered(ADBDPlayer* player);

	UFUNCTION()
	void OnRep_State(EBloodZoneState oldState);

	UFUNCTION(BlueprintCallable)
	void OnKillerDeactivationInteractionEntered(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnKillerActivationInteractionEntered(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVulnerable();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDeactivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBeingRemovedEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBeingRemovedBegin(const ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBeingActivatedEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_IsBeingActivatedBegin(float chargeTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_InitializeBloodZone();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivatedBySurvivor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivatedByKiller();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABloodZone();
};

FORCEINLINE uint32 GetTypeHash(const ABloodZone) { return 0; }
