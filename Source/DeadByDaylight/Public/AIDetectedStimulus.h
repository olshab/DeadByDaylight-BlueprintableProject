#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIDetectedStimulus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIDetectedStimulus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AActor> Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LastHasBeenSeenLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LastHasBeenSeenDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastHasBeenSeenTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NextHasBeenSeenUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AtTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Tag;

public:
	DEADBYDAYLIGHT_API FAIDetectedStimulus();
};

FORCEINLINE uint32 GetTypeHash(const FAIDetectedStimulus) { return 0; }
