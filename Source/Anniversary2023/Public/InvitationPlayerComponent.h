#pragma once

#include "CoreMinimal.h"
#include "AnniversaryPlayerComponentInterface.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "InvitationPlayerComponent.generated.h"

class UTimerObject;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY2023_API UInvitationPlayerComponent : public UActorComponent, public IAnniversaryPlayerComponentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool _isInEndGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	FSpeedBasedNetSyncedValue _invitationCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_InvitationChargesInt, Transient)
	int32 _invitationChargesInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CooldownTimer, Transient, meta=(BindWidget))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _particleVFXDeactivateTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _invitationChargeGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxNumberOfCharges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargeRechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _abilityCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargesForReward;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _disablingPlayerTargetComponentTagsQuery;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_InvitationChargesInt();

	UFUNCTION(BlueprintCallable)
	void OnRep_CooldownTimer();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_CosmeticOnInvitationInteractionActivate(ADBDPlayer* player, AActor* target);

public:
	UFUNCTION(BlueprintPure)
	float GetInvitationCharges() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetVFXParticlesVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerInChaseStateChanged(bool inChase);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInvitationInteractionReady(bool isReady);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInvitationInteractionActivate(ADBDPlayer* abilityCaster, AActor* target);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInvitationChargesIntChanged(int32 invitationCharge);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationPlayerComponent) { return 0; }
