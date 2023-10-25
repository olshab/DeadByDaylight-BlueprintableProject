#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CarriedMovementComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCarriedMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCarriedMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCarriedMovementComponent) { return 0; }
