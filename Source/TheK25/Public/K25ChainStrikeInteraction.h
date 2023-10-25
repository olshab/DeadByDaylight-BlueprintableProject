#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "EChainStrikeEndReason.h"
#include "EChainStrikeCameraViewTarget.h"
#include "K25ChainStrikeInteraction.generated.h"

class UFiniteStateMachine;
class ASlasherPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UFiniteStateMachine> _chainStrikeStateMachineclass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _repossessFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _repossessFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _gatewayPossessionFovModifierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _controlledProjectilePossessionFovModifierCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargeTimeAfterGatewayPlacementCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargeTimeAfterGatewayPossessionCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _chargeTimeAfterControlledChainShot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gatewayPossessionFovChangeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _gatewayPossessionCameraPanTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _controlledProjectilePossessionCameraPanTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _controlledProjectilePossessionFovTimeChangeDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UFiniteStateMachine* _stateMachine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _authority_shouldIncrementChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ChainStrikeCameraViewTarget, Transient, meta=(AllowPrivateAccess=true))
	EChainStrikeCameraViewTarget _chainStrikeCameraViewTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _hasHitSurvivor;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_UpdateCameraViewTargetForObservers(EChainStrikeCameraViewTarget newViewTarget);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RemoveStateTagFromPlayer(FGameplayTag tag);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AddStateTagToPlayer(FGameplayTag tag);

	UFUNCTION(BlueprintCallable)
	void OnRep_ChainStrikeCameraViewTarget();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RemoveStateTagFromPlayer(FGameplayTag tag);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddStateTagToPlayer(FGameplayTag tag);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerKillerRepossessionFadeOutEffects(ASlasherPlayer* killer, const bool preventAudioTriggers);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerKillerRepossessionFadeInEffects(ASlasherPlayer* killer, const bool hasHitSurvivor, const bool preventAudioTriggers);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerGatewayPossessionEffects(const float transitionTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ResetAllVignetteValues(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25ChainStrikeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainStrikeInteraction) { return 0; }
