#pragma once

#include "CoreMinimal.h"
#include "BloodwebChestProbability.h"
#include "BloodwebEventChestProbability.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebEventChestProbability
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBloodwebChestProbability> Chests;

public:
	DEADBYDAYLIGHT_API FBloodwebEventChestProbability();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebEventChestProbability) { return 0; }
