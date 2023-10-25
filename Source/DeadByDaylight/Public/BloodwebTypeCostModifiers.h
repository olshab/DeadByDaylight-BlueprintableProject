#pragma once

#include "CoreMinimal.h"
#include "BloodwebTypeCostModifiers.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebTypeCostModifiers
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AddOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Chest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Offerings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Perks;

public:
	DEADBYDAYLIGHT_API FBloodwebTypeCostModifiers();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebTypeCostModifiers) { return 0; }
