#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorStatusInterface.h"
#include "K35SurvivorKillerEffectUIComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35SurvivorKillerEffectUIComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

public:
	UK35SurvivorKillerEffectUIComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35SurvivorKillerEffectUIComponent) { return 0; }
