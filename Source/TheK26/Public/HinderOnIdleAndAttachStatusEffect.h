#pragma once

#include "CoreMinimal.h"
#include "LingeringStateTagStatusEffect.h"
#include "GameplayTagContainer.h"
#include "HinderOnIdleAndAttachStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _onCrowAttachStateTag;

public:
	UHinderOnIdleAndAttachStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHinderOnIdleAndAttachStatusEffect) { return 0; }
