#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "Snowpile.generated.h"

class UChargeableComponent;
class UInteractor;
class UStaticMeshComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class USnowpileInteraction;

UCLASS(Blueprintable)
class WINTEREVENT2023_API ASnowpile : public AInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _snowpileStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _snowpileInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _snowpileInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USnowpileInteraction* _snowpileInteractionSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USnowpileInteraction* _snowpileInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _snowpileInteractionChargeableSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _snowpileInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowpileInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowpileInteractionSecondsToChargeKiller;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCancelled(ADBDPlayer* interactingPlayer);

public:
	ASnowpile();
};

FORCEINLINE uint32 GetTypeHash(const ASnowpile) { return 0; }
