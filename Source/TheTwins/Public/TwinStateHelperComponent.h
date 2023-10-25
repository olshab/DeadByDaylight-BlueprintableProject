#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinStateHelperComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinStateHelperComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTwinStateHelperComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinStateHelperComponent) { return 0; }
