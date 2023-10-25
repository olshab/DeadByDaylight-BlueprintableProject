#pragma once

#include "CoreMinimal.h"
#include "NonTunableStat.h"
#include "GhostStealthUIData.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "EGhostStealthState.h"
#include "GhostStealthComponent.generated.h"

class UScreenIndicatorWorldMarkerComponent;
class UTimerObject;
class USightRevealableComponent;
class ACharacter;
class ADBDPlayer;
class UStalkerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStealthComponent : public UActorComponent, public IGhostStealthUIData
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessfulAttackInStealth, ADBDPlayer*, target);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthStateChanged, EGhostStealthState, stealthState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthCancelledByPlayer, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsStealthChanged, bool, isStealth);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsBeingSpotChanged, ADBDPlayer*, spotter, bool, isBeingSpot);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSuccessfulAttackInStealth OnSuccessfulAttackInStealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStealthStateChanged OnStealthStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsStealthChanged OnIsStealthChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsBeingSpotChanged OnIsBeingSpotChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStealthCancelledByPlayer Local_OnStealthCancelledByPlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_StealthState, Transient, meta=(AllowPrivateAccess=true))
	EGhostStealthState _stealthState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<ACharacter*, TWeakObjectPtr<UScreenIndicatorWorldMarkerComponent>> _markers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FNonTunableStat _keepStealthOnAttackMiss;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _markerMinVisibleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _markerLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stealthTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _markerMaxAngleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useKillerInstinctWhenSpotted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USightRevealableComponent* _sightRevealableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStalkerComponent* _stalkerComponent;

private:
	UFUNCTION(BlueprintCallable)
	void SetRedStainVisibility(const bool visible) const;

	UFUNCTION(BlueprintCallable)
	void OnRep_StealthState(EGhostStealthState previousState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPlayerSpottedKiller(ADBDPlayer* spotter);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnIsBeingSpottedChanged(ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_BroadcastOnSuccessfulAttackInStealth(ADBDPlayer* target);

public:
	UFUNCTION(BlueprintPure)
	bool IsStealthReadyToActivate() const;

	UFUNCTION(BlueprintPure)
	bool IsStealth() const;

	UFUNCTION(BlueprintPure)
	EGhostStealthState GetStealthState() const;

	UFUNCTION(BlueprintPure)
	float GetStealthChargePercent() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetGhostStealth();

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SpawnMarkerOnCharacter(ACharacter* revealer);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TryActivateStealth();

	UFUNCTION(BlueprintCallable)
	void Authority_ResetGhostStealth();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGhostStealthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStealthComponent) { return 0; }
