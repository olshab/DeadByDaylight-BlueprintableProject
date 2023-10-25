#pragma once

#include "CoreMinimal.h"
#include "DBDLocatorComponent.h"
#include "DBDAggregateParticleLocatorComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleLocatorComponent : public UDBDLocatorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* Template;

public:
	UDBDAggregateParticleLocatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAggregateParticleLocatorComponent) { return 0; }
