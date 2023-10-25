#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DisableOutlineComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDisableOutlineComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _enableOutlineEvents;

public:
	UDisableOutlineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisableOutlineComponent) { return 0; }
