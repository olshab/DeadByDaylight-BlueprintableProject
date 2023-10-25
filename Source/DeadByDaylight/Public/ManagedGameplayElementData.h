#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ManagedGameplayElementData.generated.h"

class UActorSpawner;

USTRUCT(BlueprintType)
struct FManagedGameplayElementData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UActorSpawner*> ActivatedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UActorSpawner*> RemovedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameplayElementType PopulationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinProximityBetweenElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDistSqrBetweenElements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FactorToAdjustToWhenOutOfProximity;

public:
	DEADBYDAYLIGHT_API FManagedGameplayElementData();
};

FORCEINLINE uint32 GetTypeHash(const FManagedGameplayElementData) { return 0; }
