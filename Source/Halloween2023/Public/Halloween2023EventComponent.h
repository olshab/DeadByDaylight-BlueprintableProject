#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EVoidEnergyChangeReason.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "Halloween2023EventComponent.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AUnstableRift;
class ULocalPlayerTrackerComponent;
class UInteractionDefinition;
class UDebugTimerLogComponent;
class AActor;
class UVoidZonePlayerComponent;
class ULinkedTeleporterComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UHalloween2023EventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _durationToKeepVoidZoneOpenForMori;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _voidWorldTeleporterBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _voidWorldHauntBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UInteractionDefinition> _stunInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UVoidZonePlayerComponent> _voidZonePlayerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeRiftsAreOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _defaultTimeBeforeRiftsOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _warningTimeBeforeRiftsClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _voidEnergyNeededToTriggerRift;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AUnstableRift*> _unstableRifts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PlayersInVoid, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersInVoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _previousPlayersInVoidZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _voidWorldHauntInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClassesToApplyToKillersOnEnterVoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClassesToApplyToSurvivorsOnEnterVoid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _voidZoneLightingLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UDebugTimerLogComponent* _debugLogTimer;

private:
	UFUNCTION(BlueprintCallable)
	void PlayerDreamStateChanged(bool isInDreamWorld, bool locallyObservedChanged);

	UFUNCTION(BlueprintCallable)
	void OnVoidZoneAboutToCloseWarning();

	UFUNCTION(BlueprintCallable)
	void OnRep_PlayersInVoid();

	UFUNCTION(BlueprintCallable)
	void OnPlayerAdded(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnVoidZoneOpen();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnVoidZoneClose();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnMoriBegin();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneOpen();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneClose();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidZoneAboutToClose();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerTeleported(ADBDPlayer* playerTeleported, bool teleportIntoVoid);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMoriStartedInVoidZone();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_TurnAllRiftsIntoTeleporters(bool turnOnTeleporters);

	UFUNCTION(BlueprintCallable)
	void Authority_PlayerTeleportedOutOfVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_PlayerTeleportedInToVoidZone(ADBDPlayer* playerTeleported, ULinkedTeleporterComponent* teleporterUsed);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_PlayerPreTeleportOutOfVoidZone(ADBDPlayer* playerTeleported);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_PlayerPreTeleportInToVoidZone(ADBDPlayer* playerTeleported);

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OpenVoidZone(bool closeVoidAfterTimer);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnVoidEnergyDeposited(const int32 amountDeposited, EVoidEnergyChangeReason changeReason);

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnComponentsAdded();

	UFUNCTION(BlueprintCallable)
	void Authority_ForceTeleportPlayersOutOfVoidZone();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_CloseVoidZone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHalloween2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHalloween2023EventComponent) { return 0; }
