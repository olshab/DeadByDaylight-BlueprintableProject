#pragma once

#include "CoreMinimal.h"
#include "MemoryStat.generated.h"

USTRUCT(BlueprintType)
struct FMemoryStat
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
	DBDANALYTICS_API FMemoryStat();
};

FORCEINLINE uint32 GetTypeHash(const FMemoryStat) { return 0; }
