#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringBlindnessEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULingeringBlindnessEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag startBlindnessEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag endBlindnessEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _state;

public:
	ULingeringBlindnessEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringBlindnessEffect) { return 0; }
