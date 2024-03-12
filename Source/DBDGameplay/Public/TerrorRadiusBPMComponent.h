#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusBPMComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTerrorRadiusBPMComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTerrorRadiusBPMComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusBPMComponent) { return 0; }
