#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "DBDTunableRowHandle.h"
#include "CoreMemoryPortal.generated.h"

class UCoreMemoryPortalComponent;
class UChargeableComponent;
class UInteractor;
class USynchronizeCoreMemoryInteraction;
class UStaticMeshComponent;
class ADBDPlayer;
class UCoreMemoryPortalFXComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ACoreMemoryPortal : public ASpecialBehaviourInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _coreMemoryPortalStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryPortalComponent* _coreMemoryPortalComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCoreMemoryPortalFXComponent* _coreMemoryPortalFXComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _synchronizeCoreMemoryInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	USynchronizeCoreMemoryInteraction* _synchronizeCoreMemoryInteractionKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _synchronizeCoreMemoryInteractionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _synchronizeCoreMemoryInteractionChargeableKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _synchronizeCoreMemoryInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _synchronizeCoreMemoryInteractionSecondsToChargeKiller;

private:
	UFUNCTION(BlueprintCallable)
	void OnInteractionStarted(ADBDPlayer* player);

public:
	ACoreMemoryPortal();
};

FORCEINLINE uint32 GetTypeHash(const ACoreMemoryPortal) { return 0; }
