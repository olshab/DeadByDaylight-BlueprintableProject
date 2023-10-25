#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EProtagonist.h"
#include "AgonyDisplayFxEvent.generated.h"

USTRUCT(BlueprintType)
struct FAgonyDisplayFxEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProtagonist Protagonist;

public:
	THEEXECUTIONER_API FAgonyDisplayFxEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAgonyDisplayFxEvent) { return 0; }
