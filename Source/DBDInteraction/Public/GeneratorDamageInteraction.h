#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "GeneratorDamageInteraction.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, UAkAudioEvent*> _canceledSfxBasedOnKiller;

public:
	UGeneratorDamageInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDamageInteraction) { return 0; }
