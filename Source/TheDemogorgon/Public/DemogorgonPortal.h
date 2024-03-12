#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "EDemogorgonPortalState.h"
#include "Engine/EngineTypes.h"
#include "DemogorgonPortal.generated.h"

class UParticleSystem;
class UChargeableComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class UAkAudioEvent;
class UAIPerceptionStimuliSourceComponent;
class AActor;

UCLASS(Blueprintable)
class THEDEMOGORGON_API ADemogorgonPortal : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _portalAreaCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _destroyChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _teleportChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDemogorgonPortalState _portalState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _portalIdleSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _portalDestroyingStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _portalTeleportingSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* _destroyParticleSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _destroyDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ADBDPlayer*> _destroyingPlayers;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void TriggerDirtExplosion();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowPortalTeleportInteractionStartVFX();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowPortalActiveVFX();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void RemovePortalTeleportInteractionStartVFX();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void RemovePortalActiveVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PlaySoundFromPortal(UAkAudioEvent* soundEvent);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTeleportAbilityCooldownChangedVFX(bool isOnCooldown);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTargetedChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPortalStateChanged(EDemogorgonPortalState state);

	UFUNCTION(BlueprintCallable)
	void OnPortalDestroyed(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable)
	void OnEndOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnBeginOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void MakePortalDisappearVFX();

public:
	UFUNCTION(BlueprintPure)
	bool IsTargeted() const;

	UFUNCTION(BlueprintPure)
	float GetDestroyDuration() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StopDestroyingPlayers();

	UFUNCTION(BlueprintCallable)
	void Authority_OnTeleportChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	ADemogorgonPortal();
};

FORCEINLINE uint32 GetTypeHash(const ADemogorgonPortal) { return 0; }
