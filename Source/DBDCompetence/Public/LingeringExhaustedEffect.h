#pragma once

#include "CoreMinimal.h"
#include "ExhaustedEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringExhaustedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringExhaustedEffect : public UExhaustedEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag startExhaustedEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag endExhaustedEventTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag _state;

public:
	ULingeringExhaustedEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringExhaustedEffect) { return 0; }
