#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerScoringComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKillerScoringComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UKillerScoringComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerScoringComponent) { return 0; }
