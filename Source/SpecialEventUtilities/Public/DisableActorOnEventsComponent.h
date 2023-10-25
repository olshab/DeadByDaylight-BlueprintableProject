#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DisableActorOnEventsComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDisableActorOnEventsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _triggerEvents;

public:
	UDisableActorOnEventsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisableActorOnEventsComponent) { return 0; }
