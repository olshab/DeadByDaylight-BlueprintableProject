#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RespawningEventComponent.h"
#include "GameEventData.h"
#include "GnomeEventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGnomeEventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimedRespawnableTrigger* _timedRespawnableTrigger;

private:
	UFUNCTION()
	void Authority_OnEndGameStarted(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UGnomeEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGnomeEventComponent) { return 0; }
