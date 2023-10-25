#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "ETileSpawnPointType.h"
#include "SpecialBehaviourPopulation.generated.h"

class AActor;
class USpecialBehaviourIterativeWeightAdjustmentStrategy;

USTRUCT(BlueprintType)
struct FSpecialBehaviourPopulation: public FDBDTableRowBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<EGameplayElementType> _spawnerTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ETileSpawnPointType> _spawnPointTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> _actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tileSpawnPointPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<USpecialBehaviourIterativeWeightAdjustmentStrategy> IterativeWeightAdjustmentStrategyClass;

public:
	DEADBYDAYLIGHT_API FSpecialBehaviourPopulation();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialBehaviourPopulation) { return 0; }
