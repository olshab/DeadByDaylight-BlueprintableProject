#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EventObjectItemWidgetInterface.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ImpactInfo.h"
#include "SnowballPlayerComponent.generated.h"

class ASnowballLauncherController;
class UThrowSnowballInteraction;
class UTimerObject;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowballPlayerComponent : public UActorComponent, public IEventObjectItemWidgetInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CooldownTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ASnowballLauncherController> _snowballLauncherControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UThrowSnowballInteraction> _snowballThrowingInteractionClassSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UThrowSnowballInteraction> _snowballThrowingInteractionClassKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowballLaunchDelayDurationSurvivorFemale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowballLaunchDelayDurationSurvivorMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowballLaunchDelayDurationKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _hideVFXTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SnowballLauncherController, meta=(AllowPrivateAccess=true))
	ASnowballLauncherController* _snowballLauncherController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SnowballThrowInteraction, Export, meta=(AllowPrivateAccess=true))
	UThrowSnowballInteraction* _snowballThrowInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SnowballThrowInteraction();

	UFUNCTION(BlueprintCallable)
	void OnRep_SnowballLauncherController();

	UFUNCTION(BlueprintCallable)
	void OnRep_CooldownTimer();

	UFUNCTION(BlueprintCallable)
	void OnOwningCamperGuidedStateChanged();

	UFUNCTION(BlueprintCallable)
	void OnCamperDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVFXVignetteTagAddedOrRemoved(ADBDPlayer* player, bool added);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrownSnowballHitPlayer(ADBDPlayer* owningPlayer, ADBDPlayer* hitPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnThrownSnowballHitCollision(ADBDPlayer* owningPlayer, FImpactInfo impactInfo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrowStart(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballThrown();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballsDepleted(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSnowballCollected();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerUnhidden(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerHidden(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerDiedOrBeingKilled(ADBDPlayer* deadPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperPickUpEndOrDropped(ADBDPlayer* pickedUpPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperPickedUp(ADBDPlayer* pickedUpPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USnowballPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowballPlayerComponent) { return 0; }
