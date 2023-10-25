#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "DBDAggregateParticleSystemComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleSystemComponent : public UParticleSystemComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndFadeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TSet<USceneComponent*> LocatorComponentCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool PendingReset;

public:
	UDBDAggregateParticleSystemComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAggregateParticleSystemComponent) { return 0; }
