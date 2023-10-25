#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "RitualEvent.generated.h"

class AActor;
class ADBDPlayer;
class ADBDPlayerState;

USTRUCT(BlueprintType)
struct FRitualEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EDBDScoreTypes ScoreType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FGameplayTag GameEventType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayerState* InstigatorPlayerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* Target;

public:
	DEADBYDAYLIGHT_API FRitualEvent();
};

FORCEINLINE uint32 GetTypeHash(const FRitualEvent) { return 0; }
