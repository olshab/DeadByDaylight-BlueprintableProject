#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ObjectLock.h"
#include "Interactor.generated.h"

class UInteractionDefinition;
class ADBDPlayer;
class AInteractable;
class UInterruptionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractor : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InteractorName;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool IsUsable;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FObjectLock _lock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FObjectLock _reservation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _currentInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UInteractionDefinition*> _interactionDefinitions;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsUsable(bool isUsableParam);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_ReservationStatus(ADBDPlayer* player, bool lock);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
	void Multicast_LockStatus(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock);

public:
	UFUNCTION(BlueprintCallable)
	bool IsInterruptionPossible(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const;

	UFUNCTION(BlueprintPure)
	bool IsInteracting() const;

	UFUNCTION(BlueprintPure)
	bool GetIsUsable() const;

	UFUNCTION(BlueprintPure)
	TArray<UInteractionDefinition*> GetInteractionDefinitions() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetInteractingPlayerRaw() const;

	UFUNCTION(BlueprintPure)
	AInteractable* GetInteractable() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetCurrentInteraction() const;

	UFUNCTION(BlueprintPure)
	bool CanPerformInteraction(const ADBDPlayer* player, const UInteractionDefinition* definition) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BPPostInitializeComponents();

	UFUNCTION(BlueprintPure)
	ADBDPlayer* Authority_GetInteractingPlayer() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInteractor();
};

FORCEINLINE uint32 GetTypeHash(const UInteractor) { return 0; }
