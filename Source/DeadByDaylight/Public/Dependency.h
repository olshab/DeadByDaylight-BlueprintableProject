#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "UObject/SoftObjectPtr.h"
#include "ETileSpawnPointType.h"
#include "GameplayTagContainer.h"
#include "Dependency.generated.h"

class UIterativeWeightAdjustmentStrategy;
class AActor;

USTRUCT(BlueprintType)
struct FDependency
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileSpawnPointType Type;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath AssetReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> Object;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Unique;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _spawnConditionsName;

	UPROPERTY(EditAnywhere)
	FGameplayTag _elementTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _allowFallback;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _spawnOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UIterativeWeightAdjustmentStrategy> _iterativeWeightAdjustmentStrategyClass;

public:
	DEADBYDAYLIGHT_API FDependency();
};

FORCEINLINE uint32 GetTypeHash(const FDependency) { return 0; }
