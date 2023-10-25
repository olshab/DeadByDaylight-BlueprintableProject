#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualDifficulty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Tolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayThreshold;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualDifficulty();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualDifficulty) { return 0; }
