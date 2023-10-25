#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FirecrackerScoreComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirecrackerScoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFirecrackerScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFirecrackerScoreComponent) { return 0; }
