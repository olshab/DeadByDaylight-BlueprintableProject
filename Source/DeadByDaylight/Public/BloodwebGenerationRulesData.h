#pragma once

#include "CoreMinimal.h"
#include "BloodwebRarityCost.h"
#include "BloodwebEventChestProbability.h"
#include "BloodwebRingComposition.h"
#include "BloodwebTypeCostModifiers.h"
#include "BloodwebChestProbability.h"
#include "BloodwebGenerationRulesData.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebGenerationRulesData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBloodwebRingComposition> RingComposition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBloodwebRarityCost RarityCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBloodwebTypeCostModifiers TypeCostModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBloodwebChestProbability> ChestProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBloodwebEventChestProbability> EventChestProbability;

public:
	DEADBYDAYLIGHT_API FBloodwebGenerationRulesData();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebGenerationRulesData) { return 0; }
