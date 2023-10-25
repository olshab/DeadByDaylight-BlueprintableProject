#pragma once

#include "CoreMinimal.h"
#include "Stat.generated.h"

USTRUCT(BlueprintType)
struct FStat
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
	DBDANALYTICS_API FStat();
};

FORCEINLINE uint32 GetTypeHash(const FStat) { return 0; }
