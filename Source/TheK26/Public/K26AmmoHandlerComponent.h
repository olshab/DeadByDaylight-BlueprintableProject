#pragma once

#include "CoreMinimal.h"
#include "EK26AmmoCooldownReason.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "OnCurrentAmmoStateChanged.h"
#include "Templates/SubclassOf.h"
#include "OnMaxAmmoSetEvent.h"
#include "EK26AmmoState.h"
#include "K26AmmoHandlerComponent.generated.h"

class ASlasherPlayer;
class UK26PathHandlerComponent;
class AActor;
class UK26PowerStatusHandlerComponent;
class UAuthoritativeActorPoolComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26AmmoHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnMaxAmmoSetDelegate, const int32, maxAmmo);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCurrentAmmoStateChanged OnCurrentAmmoStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	FTagStateBool _isAmmoOnCooldown;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnMaxAmmoSetEvent _onMaxAmmoSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _rechargeEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isTunableInit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _projectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _expirationCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _firedCooldownTimesPerCrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _cooldownReductionPerCrowFired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _expirationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _expirationWarningBufferTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _currentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	EK26AmmoCooldownReason _lastCooldownReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	EK26AmmoState _currentAmmoState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PathHandlerComponent* _pathHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PowerStatusHandlerComponent* _statusHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _authoritativeActorPoolComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isOutOfAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _fallbackFireCooldown;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent);

private:
	UFUNCTION(BlueprintCallable)
	void SendHasExpiredDelegate();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartRecharging(const EK26AmmoCooldownReason lastCooldownReason);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartExpiring();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnCurrentAmmoStateChanged(const EK26AmmoState newState, const int32 currentAmmo, const int32 maxAmmo);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAmmoHasBeenFired();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAmmoExpired();

public:
	UFUNCTION(BlueprintPure)
	int32 GetMaxAmmo() const;

	UFUNCTION(BlueprintPure)
	EK26AmmoCooldownReason GetCurrentCooldownReason() const;

	UFUNCTION(BlueprintPure)
	EK26AmmoState GetCurrentAmmoState() const;

	UFUNCTION(BlueprintPure)
	int32 GetCurrentAmmo() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnExpiringWarning();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAmmoHasBeenFired();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAmmoExpired();

public:
	UFUNCTION(BlueprintCallable)
	void CallOnMaxAmmoSet(FOnMaxAmmoSetDelegate callback);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnAmmoInit(AActor* initAmmo);

	UFUNCTION(BlueprintCallable)
	void Authority_InitializePoolComponent(const int32 maxAmmo);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26AmmoHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26AmmoHandlerComponent) { return 0; }
