#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "ETrapType.h"
#include "GameplayTagContainer.h"
#include "SurvivorTrapPerk.generated.h"

class AInteractable;
class UPerkTrappableComponent;
class UTrapInstallerComponent;
class ACamperPlayer;
class AActor;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorTrapPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETrapType _trapType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AInteractable> _trappableInteractableType;

	UPROPERTY(EditAnywhere)
	float _progressPercentRequirementLevels;

	UPROPERTY(EditAnywhere)
	float _trapDurationLevels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TrappedInteractable, Transient)
	AInteractable* _trappedInteractable;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UTrapInstallerComponent> _trapInstallerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _progressPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isTrapReady;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TrappedInteractable(AInteractable* oldInteractable);

public:
	UFUNCTION(BlueprintPure)
	float GetTrapDuration() const;

	UFUNCTION(BlueprintPure)
	float GetRequiredRepairProgressForSettingTrap() const;

	UFUNCTION(BlueprintPure)
	float GetRepairProgressPercent() const;

	UFUNCTION(BlueprintPure)
	UPerkTrappableComponent* GetPerkTrappableComponent(AInteractable* interactable) const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTrapTimerDone();

	UFUNCTION()
	void Authority_OnTrapInteractionEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

protected:
	UFUNCTION()
	void Authority_OnKillerInteracted(const FGameplayTag gameEventTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorTrapPerk();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorTrapPerk) { return 0; }
