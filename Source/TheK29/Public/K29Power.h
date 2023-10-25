#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "StatProperty.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "K29Power.generated.h"

class UK29RushChargesHandlerComponent;
class UK29PowerStatusHandlerComponent;
class UK29PowerChargePresentationItemProgressComponent;
class UInteractor;
class UK29PowerChargePresentationPowerFadeComponent;
class UChargeableComponent;
class UBoxPlayerOverlapComponent;
class UStaticMeshComponent;
class UK29PathingCalculatorComponent;
class UStatusEffect;
class AAnimationFollowerActor;
class UInteractionDefinition;
class UK29RushCooldownInteraction;
class UK29RushChargeableInteraction;

UCLASS(Blueprintable)
class AK29Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _rushChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK29PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UK29PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK29PowerStatusHandlerComponent> _powerStatusHandlerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK29RushChargesHandlerComponent> _rushChargesHandlerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK29PathingCalculatorComponent> _pathingCalculatorComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _blindnessProtectionStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _rushChargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty _scorePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AAnimationFollowerActor> _moriTentaclesAnimationFollowerActorClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK29PathingCalculatorComponent* _pathingCalculatorComponent;

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UInteractionDefinition* GetSlashSurvivorInteraction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UInteractionDefinition* GetSlashBreakableInteraction();

	UFUNCTION(BlueprintPure)
	float GetScorePercent() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushVaultCooldownInteraction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UStaticMeshComponent* GetRushSurvivorDetectionBox();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteSurvivorThrowCooldownInteraction();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteSurvivorHitCooldownInteraction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteNoSurvivorCooldownInteraction();

	UFUNCTION(BlueprintCallable)
	UK29RushChargesHandlerComponent* GetRushChargesHandlerComponent();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushChargeCancelCooldownInteraction();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK29RushChargeableInteraction* GetRushChargeableInteraction();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushBreakableCooldownInteraction();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UInteractionDefinition* GetPushSurvivorOverLedgeInteraction();

	UFUNCTION(BlueprintCallable)
	UK29PowerStatusHandlerComponent* GetPowerStatusHandlerComponent();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetDropSurvivorCooldownInteraction();

private:
	UFUNCTION()
	void Authority_OnStun(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK29Power();
};

FORCEINLINE uint32 GetTypeHash(const AK29Power) { return 0; }
