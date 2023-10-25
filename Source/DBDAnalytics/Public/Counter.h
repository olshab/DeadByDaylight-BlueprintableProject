#pragma once

#include "CoreMinimal.h"
#include "Counter.generated.h"

USTRUCT(BlueprintType)
struct FCounter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatValueMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatValueMax;

public:
	DBDANALYTICS_API FCounter();
};

FORCEINLINE uint32 GetTypeHash(const FCounter) { return 0; }
