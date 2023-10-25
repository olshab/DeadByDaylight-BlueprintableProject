#pragma once

#include "CoreMinimal.h"
#include "BloodwebChestProbability.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebChestProbability
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChestRarity;

public:
	DEADBYDAYLIGHT_API FBloodwebChestProbability();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebChestProbability) { return 0; }
