#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawningEventComponent.generated.h"

class URespawnableStrategy;
class URespawnablePositioner;
class ARespawnableInteractable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawningEventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	URespawnableStrategy* _respawnableStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	URespawnablePositioner* _respawnablePositioner;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceRespawnSpecialEventObject();

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting);

public:
	URespawningEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const URespawningEventComponent) { return 0; }
