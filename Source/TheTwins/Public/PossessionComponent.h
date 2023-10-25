#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessionComponent.generated.h"

class AAIController;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPossessionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _startPossessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AAIController* _emptyController;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_StartPossessionOf(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_NotifyPossessionDone();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_NotifyBeingPossessedInteractionStarted();

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartPossessionOf(ADBDPlayer* playerToPossess);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_NotifyPossessionDone();

public:
	UFUNCTION(BlueprintPure)
	bool IsPossessed() const;

	UFUNCTION(BlueprintPure)
	bool IsDormant() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void CosmeticLocal_OnUncontrolled(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void CosmeticLocal_OnControlled(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlledChanged(ADBDPlayer* player, bool isControlled);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_WaitForBeingPossessedInteractionToStart();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_StartStateMachineDriverChangeProcess();

public:
	UPossessionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPossessionComponent) { return 0; }
