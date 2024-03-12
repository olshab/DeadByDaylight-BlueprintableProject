#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Templates/SubclassOf.h"
#include "SeanceRitualSpot.generated.h"

class AActor;
class UStatusEffect;
class ADBDPlayer;
class ACamperPlayer;
class UChargeableComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ASeanceRitualSpot : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _ritualChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondsToCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dechargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	ACamperPlayer* _ritualOriginator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorsPerformingRitual, Transient)
	TArray<ACamperPlayer*> _survivorsPerformingRitual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _revealAuraEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool _ritualUseable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<ADBDPlayer*, float> _authority_progressAmountsCumulative;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorsPerformingRitual();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool OnFinishedRitual();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSeanceCompleted(ACamperPlayer* originator);

public:
	UFUNCTION(BlueprintPure)
	TArray<ACamperPlayer*> GetRitualPerformers() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SurvivorsPerformingRitualUpdated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting(bool interrupted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, bool isOriginator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionUpdate(const ADBDPlayer* interactingPlayer, const float chargePercent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPerformRitualChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASeanceRitualSpot();
};

FORCEINLINE uint32 GetTypeHash(const ASeanceRitualSpot) { return 0; }
