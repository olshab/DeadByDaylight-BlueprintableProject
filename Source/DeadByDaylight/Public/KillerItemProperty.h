#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "KillerItemProperty.generated.h"

class UIterativeWeightAdjustmentStrategy;
class AActor;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FKillerItemProperty
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> Object;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* Population;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameplayElementType _gameplayElementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UIterativeWeightAdjustmentStrategy> IterativeWeightAdjustmentStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tileSpawnPointPriority;

public:
	DEADBYDAYLIGHT_API FKillerItemProperty();
};

FORCEINLINE uint32 GetTypeHash(const FKillerItemProperty) { return 0; }
