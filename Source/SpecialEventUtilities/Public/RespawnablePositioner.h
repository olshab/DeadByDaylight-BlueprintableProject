#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IsInteractingWithAnyRespawnableInteractableChangedEvent.h"
#include "RespawnablePositioner.generated.h"

class ARespawnableInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnablePositioner : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FIsInteractingWithAnyRespawnableInteractableChangedEvent OnIsInteractingWithAnyRespawnableInteractableChangedEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ARespawnableInteractable*> _respawnableInteractables;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIsInteractingChangedEvent(ARespawnableInteractable* respawnableInteractable, bool isInteracting);

public:
	UFUNCTION(BlueprintPure)
	TArray<ARespawnableInteractable*> Authority_GetRespawnables() const;

public:
	URespawnablePositioner();
};

FORCEINLINE uint32 GetTypeHash(const URespawnablePositioner) { return 0; }
