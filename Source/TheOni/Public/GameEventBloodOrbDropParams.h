#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventBloodOrbDropParams.generated.h"

USTRUCT(BlueprintType)
struct FGameEventBloodOrbDropParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpulseFactor;

public:
	THEONI_API FGameEventBloodOrbDropParams();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventBloodOrbDropParams) { return 0; }
