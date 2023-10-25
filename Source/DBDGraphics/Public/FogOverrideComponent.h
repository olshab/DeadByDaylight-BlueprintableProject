#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FogOverrideComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFogOverrideComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interpolationDistance;

public:
	UFogOverrideComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFogOverrideComponent) { return 0; }
