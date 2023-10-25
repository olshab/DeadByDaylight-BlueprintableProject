#pragma once

#include "CoreMinimal.h"
#include "K31UIDataInterface.h"
#include "GameplayTagContainer.h"
#include "StatProperty.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "ClawTrapUntrapDatum.h"
#include "K31SurvivorClawTrapComponent.generated.h"

class UTimerObject;
class UK31PlayerZoneStatus;
class USurvivorRemoveClawTrapInteraction;
class AK31Power;
class AK31Drone;
class AK31ClawTrap;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorClawTrapComponent : public UActorComponent, public IK31UIDataInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _batteryChargeTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OriginatingPower, meta=(AllowPrivateAccess=true))
	AK31Power* _originatingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsTrapped, meta=(AllowPrivateAccess=true))
	bool _isTrapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBroadcasting, meta=(AllowPrivateAccess=true))
	bool _isBroadcasting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RemoveClawTrapInteraction, Export, meta=(AllowPrivateAccess=true))
	USurvivorRemoveClawTrapInteraction* _removeClawTrapInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USurvivorRemoveClawTrapInteraction> _removeClawTrapInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31ClawTrap* _clawTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AK31ClawTrap> _clawTrapClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _clawTrapCosmeticDelayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _clawTrapAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK31PlayerZoneStatus* _authority_playerZoneStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FClawTrapUntrapDatum _lastUntrapDatum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _wasLastRemovedAutomatically;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31Drone* _authority_originatingDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _batteryMaxCharge;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_RemoveClawTrapInteraction();

	UFUNCTION(BlueprintCallable)
	void OnRep_OriginatingPower(AK31Power* oldPower);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsTrapped();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsBroadcasting();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION()
	void OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ClawTrapAddedByDrone(AK31Drone* originatingDrone);

public:
	UFUNCTION(BlueprintPure)
	float GetClawTrapCosmeticDelayDuration() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31SurvivorClawTrapComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorClawTrapComponent) { return 0; }
