#pragma once

#include "CoreMinimal.h"
#include "HangTimesPerStep.generated.h"

USTRUCT(BlueprintType)
struct FHangTimesPerStep
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SourceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PossibleHangTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HardCapTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeCapWithoutProgress;

public:
	DEADBYDAYLIGHT_API FHangTimesPerStep();
};

FORCEINLINE uint32 GetTypeHash(const FHangTimesPerStep) { return 0; }
