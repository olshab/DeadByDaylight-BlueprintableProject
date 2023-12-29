#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "TeleportToDemogorgonPortalInteraction.generated.h"

class UDemogorgonPortalTargetingComponent;
class UStatusEffect;
class ADBDPlayer;
class ASlasherPlayer;
class UDemogorgonPortalPlacerStateComponent;
class ADemogorgonPortal;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _teleportToPortalSoundRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inputReleaseChargePercentAllowance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _enterPortalPhaseDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cancelTeleportingPhaseDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _redMossStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalTargetingComponent* _portalTargetingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADemogorgonPortal* _startingPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADemogorgonPortal* _targetedPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _interactingPlayer;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTeleportInteractionCanceledVFX();

private:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(const bool isKillerLocallyObserved);

public:
	UTeleportToDemogorgonPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTeleportToDemogorgonPortalInteraction) { return 0; }
