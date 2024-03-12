#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "S40CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US40CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	US40CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const US40CheatComponent) { return 0; }
