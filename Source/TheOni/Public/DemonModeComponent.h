#pragma once

#include "CoreMinimal.h"
#include "DemonModeChargeGainedAfterAttackDelegate.h"
#include "DemonModeEndedDelegate.h"
#include "Components/ActorComponent.h"
#include "DemonModeReadyDelegate.h"
#include "DemonModeStartedDelegate.h"
#include "DemonModeChargeGainedAfterLockerGrabDelegate.h"
#include "DemonModeInterruptedDuringStartupDelegate.h"
#include "DemonModeInterruptedDuringEndingDelegate.h"
#include "EDemonModeState.h"
#include "AnimationMontageDescriptor.h"
#include "DemonModeComponent.generated.h"

class UPowerChargeComponent;
class UPowerToggleComponent;
class UInteractionStarterComponent;
class UParticleSystemComponent;
class UInteractionDefinition;
class USkeletalMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEONI_API UDemonModeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeReadyDelegate OnDemonModeReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeStartedDelegate OnDemonModeStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeEndedDelegate OnDemonModeEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeInterruptedDuringStartupDelegate OnDemonModeInterruptedDuringStartup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeInterruptedDuringEndingDelegate OnDemonModeInterruptedDuringEnding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeChargeGainedAfterAttackDelegate OnChargeGainedAfterAttackCosmetic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDemonModeChargeGainedAfterLockerGrabDelegate OnChargeGainedAfterLockerGrabCosmetic;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _powerChargeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerToggleComponent* _powerToggleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionStarterComponent* _authority_demonModeCooldownStarterComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _demonModeCooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	EDemonModeState _demonModeState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USkeletalMeshComponent*> _normalModeCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<USkeletalMeshComponent*> _demonModeCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UParticleSystemComponent*> _demonModeVfx;

public:
	UFUNCTION(BlueprintCallable)
	void ShowDemonModeCustomization(bool showDemonMode);

	UFUNCTION(BlueprintPure)
	bool ShouldLoseDemonModeOnStun() const;

private:
	UFUNCTION(BlueprintCallable)
	void OnPowerChargeFull() const;

	UFUNCTION(BlueprintCallable)
	void OnPowerChargeEmpty() const;

	UFUNCTION(BlueprintCallable)
	void OnIsPowerChanged(const bool isInPower) const;

	UFUNCTION(BlueprintCallable)
	void OnCustomizationChanged();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DemonModeInterruptedOnStartup();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DemonModeInterruptedOnEnding();

public:
	UFUNCTION(BlueprintPure)
	bool IsInDemonMode() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetNormalModeCustomization() const;

	UFUNCTION(BlueprintPure)
	EDemonModeState GetDemonModeState() const;

	UFUNCTION(BlueprintPure)
	TArray<USkeletalMeshComponent*> GetDemonModeCustomization() const;

	UFUNCTION(BlueprintPure)
	float GetCurrentCharge() const;

	UFUNCTION(BlueprintPure)
	float GetChargePercent() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DemonModeForever(const bool forever);

	UFUNCTION(BlueprintPure)
	bool CanStartDemonMode() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetDemonModeCooldownInteraction(UInteractionDefinition* interaction);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeChanged(const float currentChargePercent);

	UFUNCTION(BlueprintCallable)
	void Authority_InterruptedMontage(const FAnimationMontageDescriptor montage, bool interrupted);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddCharge(const float chargeAmount);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDemonModeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemonModeComponent) { return 0; }
