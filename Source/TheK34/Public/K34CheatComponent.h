#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K34CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK34CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34CheatComponent) { return 0; }
