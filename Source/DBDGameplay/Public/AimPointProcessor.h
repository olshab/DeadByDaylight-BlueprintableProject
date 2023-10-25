#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimPointProcessor.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UAimPointProcessor : public UActorComponent
{
	GENERATED_BODY()

public:
	UAimPointProcessor();
};

FORCEINLINE uint32 GetTypeHash(const UAimPointProcessor) { return 0; }
