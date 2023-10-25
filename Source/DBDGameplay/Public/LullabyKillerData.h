#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LullabyKillerData.generated.h"

USTRUCT(BlueprintType)
struct FLullabyKillerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditAnywhere)
	FGameplayTag KillerLullabyActivationState;

	UPROPERTY(EditAnywhere)
	FGameplayTag SurvivorLullabyActivationState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerLullabyDistance;

public:
	DBDGAMEPLAY_API FLullabyKillerData();
};

FORCEINLINE uint32 GetTypeHash(const FLullabyKillerData) { return 0; }
