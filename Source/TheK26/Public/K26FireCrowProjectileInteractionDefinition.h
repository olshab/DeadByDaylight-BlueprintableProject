#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "OnProjectileFired.h"
#include "K26FireCrowProjectileInteractionDefinition.generated.h"

class UK26CooldownInteractionDefinition;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnProjectileFired OnProjectileFired;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26CooldownInteractionDefinition* _cooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26PathHandlerComponent* _pathHandler;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26CooldownInteractionDefinition* cooldownInteraction);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestFireOnAmmo(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnProjectileFired(const ASlasherPlayer* killer);

public:
	UK26FireCrowProjectileInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26FireCrowProjectileInteractionDefinition) { return 0; }
