#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ContainsItemInterface.h"
#include "Interactable.h"
#include "EK32ItemBoxState.h"
#include "K32ItemBox.generated.h"

class UK32ItemBoxSpeedUpInteraction;
class ACollectable;
class ADBDPlayer;
class USceneComponent;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class UPrimitiveComponent;
class UDBDSkeletalMeshComponentBudgeted;
class AActor;

UCLASS(Blueprintable)
class THEK32_API AK32ItemBox : public AInteractable, public IContainsItemInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _chargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnedItem, Transient)
	ACollectable* _spawnedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _containingItemSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _itemDropPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_State)
	EK32ItemBoxState _state;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UK32ItemBoxSpeedUpInteraction* _itemBoxSpeedUpInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _interactionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _inProgressDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _addon12ChargeTimeExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsSurvivorInteracting, meta=(AllowPrivateAccess=true))
	bool _isSurvivorInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _survivorInteracting;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_State();

	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnedItem();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsSurvivorInteracting();

	UFUNCTION(BlueprintCallable)
	void OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetIsChargeTimeExtended(const bool isAddonExtendingFirstActivationTimer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorInteractingChanged(bool isInteracting);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStateChanged(EK32ItemBoxState newState);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnItemPickup(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32ItemBox();
};

FORCEINLINE uint32 GetTypeHash(const AK32ItemBox) { return 0; }
