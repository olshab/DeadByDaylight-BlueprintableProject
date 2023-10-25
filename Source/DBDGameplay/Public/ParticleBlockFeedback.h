#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "ParticleBlockFeedback.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, Abstract)
class AParticleBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UParticleSystemComponent* _effect;

public:
	AParticleBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const AParticleBlockFeedback) { return 0; }
