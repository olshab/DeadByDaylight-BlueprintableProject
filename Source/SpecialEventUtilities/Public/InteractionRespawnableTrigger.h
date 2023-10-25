#pragma once

#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "InteractionRespawnableTrigger.generated.h"

class URespawningEventComponent;
class ARespawnableInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UInteractionRespawnableTrigger : public URespawnableTrigger
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	URespawningEventComponent* _respawningEventComponent;

public:
	UFUNCTION(BlueprintCallable)
	void Authority_OnNewRespawnableSubscribed(ARespawnableInteractable* newRespawnableInteractable);

	UFUNCTION(BlueprintCallable)
	void Authority_OnInteractionEnded(ARespawnableInteractable* respawnableInteractable);

public:
	UInteractionRespawnableTrigger();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionRespawnableTrigger) { return 0; }
