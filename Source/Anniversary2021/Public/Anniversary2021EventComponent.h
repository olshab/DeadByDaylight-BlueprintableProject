#pragma once

#include "CoreMinimal.h"
#include "RespawningEventComponent.h"
#include "Anniversary2021EventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY2021_API UAnniversary2021EventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionRespawnableTrigger* _interactionRespawnableTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimedRespawnableTrigger* _timedRespawnableTrigger;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroComplete();

public:
	UAnniversary2021EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAnniversary2021EventComponent) { return 0; }
