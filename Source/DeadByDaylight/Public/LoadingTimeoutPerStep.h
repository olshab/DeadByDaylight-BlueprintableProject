#pragma once

#include "CoreMinimal.h"
#include "LoadingTimeoutPerStep.generated.h"

USTRUCT(BlueprintType)
struct FLoadingTimeoutPerStep
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExpectedTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HardCapTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeCapWithoutProgress;

public:
	DEADBYDAYLIGHT_API FLoadingTimeoutPerStep();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingTimeoutPerStep) { return 0; }
