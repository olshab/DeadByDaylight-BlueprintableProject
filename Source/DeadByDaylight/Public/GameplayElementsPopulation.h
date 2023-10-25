#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "ETileSpawnPointType.h"
#include "GameplayElementsPopulation.generated.h"

class UIterativeWeightAdjustmentStrategy;
class AActor;

USTRUCT(BlueprintType)
struct FGameplayElementsPopulation
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameplayElementType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ETileSpawnPointType TileSpawnPointType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> GameplayElementBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MinPopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MaxPopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MinGuaranteePopulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SpawnPass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UIterativeWeightAdjustmentStrategy> IterativeWeightAdjustmentStrategyClass;

public:
	DEADBYDAYLIGHT_API FGameplayElementsPopulation();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayElementsPopulation) { return 0; }
