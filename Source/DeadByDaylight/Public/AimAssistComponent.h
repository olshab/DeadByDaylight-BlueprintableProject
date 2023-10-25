#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AimAssistComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAimAssistComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAimAssistComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAimAssistComponent) { return 0; }
