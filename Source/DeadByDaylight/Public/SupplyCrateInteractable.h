#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "ContainsItemInterface.h"
#include "Interactable.h"
#include "SupplyCrateInteractable.generated.h"

class ACollectable;
class UChargeableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ASupplyCrateInteractable : public AInteractable, public IContainsItemInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ACollectable> _containedCollectable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _openInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ACollectable* _itemInSupplyCrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _containingItemSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _itemDropPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsOpen, Transient, meta=(AllowPrivateAccess=true))
	bool _isOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAutoClosing, Transient, meta=(AllowPrivateAccess=true))
	bool _isAutoClosing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _crateSelfClosingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _crateAutoCloseAnimationTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsOpen();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAutoClosing();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIsOpened();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIsClosing();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASupplyCrateInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ASupplyCrateInteractable) { return 0; }
