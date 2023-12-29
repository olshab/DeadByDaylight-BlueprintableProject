#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameEventData.h"
#include "LinkedTeleporterComponent.generated.h"

class ULinkedTeleporterComponent;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API ULinkedTeleporterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoidZoneEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportInteractWithPlayer, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportEnabled, bool, isEnabled);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnVoidZoneEvent Cosmetic_OnVoidZoneAboutToClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTeleportEnabled Cosmetic_OnTeleporterEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTeleportInteractWithPlayer Cosmetic_OnPlayerTeleported;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTeleportInteractWithPlayer Cosmetic_OnPlayerCooldownOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(BindWidget))
	ULinkedTeleporterComponent* _linkedTeleporter;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportationCooldownTime;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _survivorTagsPreventingTeleport;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _killerTagsPreventingTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsAllowedToTeleport, meta=(AllowPrivateAccess=true))
	bool _isAllowedToTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _forceCamperDropSpecialItemOnTeleport;

private:
	UFUNCTION(BlueprintCallable)
	void OnVoidZoneAboutToClose();

	UFUNCTION(BlueprintCallable)
	void OnTimerEnd(ADBDPlayer* player);

	UFUNCTION()
	void OnTeleporterTriggered(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsAllowedToTeleport();

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

private:
	UFUNCTION(BlueprintCallable)
	void OnEventComponentsSpawned();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TeleportPlayer(ADBDPlayer* player, const FVector teleportLocation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULinkedTeleporterComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULinkedTeleporterComponent) { return 0; }
