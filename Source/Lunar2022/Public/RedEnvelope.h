#pragma once

#include "CoreMinimal.h"
#include "RedEnvelopeData.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "RedEnvelope.generated.h"

class URedEnvelopeInteraction;
class ULunar2022EventComponent;
class ADBDPlayerState;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UStaticMeshComponent;
class URedEnvelopeOutlineUpdateStrategy;

UCLASS(Blueprintable)
class LUNAR2022_API ARedEnvelope : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OwnerPlayerState, Transient)
	ADBDPlayerState* _ownerPlayerState;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RedEnvelopeData, meta=(AllowPrivateAccess=true))
	FRedEnvelopeData _redEnvelopeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeInteraction* _redEnvelopeInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeInteraction* _redEnvelopeInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _redEnvelopeInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _redEnvelopeInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _redEnvelopeInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _redEnvelopeInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _redEnvelopeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _redEnvelopeInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _redEnvelopeInteractionSecondsToChargeKiller;

	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<ULunar2022EventComponent> _eventComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeOutlineUpdateStrategy* _redEnvelopeOutlineUpdateStrategy;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_RedEnvelopeData();

	UFUNCTION(BlueprintCallable)
	void OnRep_OwnerPlayerState();

public:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetBackgroundVFX(bool isOwner);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTriggerDisappearingVFX(const ADBDPlayer* interactingPlayer, bool isOwner, bool isJackpot);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionUpdate(const ADBDPlayer* interactingPlayer, const float chargePercent, bool isOwner);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStopped(const ADBDPlayer* interactingPlayer, bool isOwner);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStart(const ADBDPlayer* interactingPlayer, bool isOwner);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddEmberEffect(const ADBDPlayer* owningPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ARedEnvelope();
};

FORCEINLINE uint32 GetTypeHash(const ARedEnvelope) { return 0; }
