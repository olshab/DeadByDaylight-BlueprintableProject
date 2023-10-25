#pragma once

#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "PlayerInteractable.h"
#include "CamperInteractable.generated.h"

class USphereComponent;
class UBoxComponent;
class UActivatorComponent;
class ACamperPlayer;
class UInteractor;
class UChargeableComponent;
class UChargeableInteractionDefinition;
class UInteractionDefinition;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ACamperInteractable : public APlayerInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UInteractor*> HealingInteractors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UChargeableInteractionDefinition*> _healInteractions;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _killCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActivatorComponent* _activator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _killInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _killInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _killHealthyInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _healingInteractor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _killerInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _killerInteractionZone;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateTargetHPSlot();

public:
	UFUNCTION(BlueprintCallable)
	void SetKillInteraction(UInteractionDefinition* killInteraction);

private:
	UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
	void ServerMoveOut();

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UInteractor* GetSlasherInteractor() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

public:
	ACamperInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ACamperInteractable) { return 0; }
