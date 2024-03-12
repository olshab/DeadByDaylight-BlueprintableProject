#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "ETelevisionCosmeticState.h"
#include "OnryoTelevision.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class USceneComponent;
class UMapActorComponent;
class UTelevisionOutlineUpdateStrategy;
class ULocalPlayerTrackerComponent;
class UOnryoTVAutoPowerComponent;

UCLASS(Blueprintable)
class THEONRYO_API AOnryoTelevision : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _teleportPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isKillerInOtherWorld;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTelevisionOutlineUpdateStrategy* _televisionOutlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UOnryoTVAutoPowerComponent* _autoPowerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsPowered, meta=(AllowPrivateAccess=true))
	bool _isPowered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> _nearbySurvivorsWithoutTape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _distanceNearTVWithoutTape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _survivorTurnOffTVDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _teleportTurnOffDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _survivorInsertTapeTurnOffDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shouldRepowerOtherTelevisionsWhenAllTurnedOff;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsPowered(bool previousIsPowered);

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable)
	void OnCosmeticTransitionStateFinished();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetSurvivorCanInsertTape(const ADBDPlayer* survivor, const bool canInsert, const bool showBubbleIndicator);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FireLoudNoiseNotification();

protected:
	UFUNCTION(BlueprintPure)
	bool IsAnySurvivorWithoutTapeNearby() const;

	UFUNCTION(BlueprintPure)
	ETelevisionCosmeticState GetTelevisionCosmeticState() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetIsTeleportTarget(bool target);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTVSelectedByLocalSurvivor(ADBDPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTelevisionCosmeticStateChanged(ETelevisionCosmeticState nextState, ETelevisionCosmeticState previousState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStarted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCompleted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool active);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPoweredOnVfxRadiusChanged(float newPoweredOnVfxRadius);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCamperCanInsertTapeChanged(const bool canInsertTape);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnRepowerTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AOnryoTelevision();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoTelevision) { return 0; }
