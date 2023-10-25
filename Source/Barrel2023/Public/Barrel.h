#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "EBarrelType.h"
#include "UObject/NoExportTypes.h"
#include "Barrel.generated.h"

class UPrimitiveComponent;
class UBarrelInteraction;
class ADBDPlayer;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BARREL2023_API ABarrel : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBarrelInteraction* _barrelInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UBarrelInteraction* _barrelInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _barrelInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _barrelInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _barrelInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _barrelInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _barrelStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _extractorStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _barrelInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _barrelInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	EBarrelType _barrelType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OnLocationChanged, Transient, meta=(AllowPrivateAccess=true))
	FVector _barrelLocation;

public:
	UFUNCTION(BlueprintCallable)
	void SetDissolveStarted(bool isDissolveStarted);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_OnLocationChanged();

protected:
	UFUNCTION(BlueprintCallable)
	void OnBarrelDespawnCosmeticsComplete();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionInterruptedByPlayer();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFirstBarrelSpawn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnBarrelRespawn();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABarrel();
};

FORCEINLINE uint32 GetTypeHash(const ABarrel) { return 0; }
