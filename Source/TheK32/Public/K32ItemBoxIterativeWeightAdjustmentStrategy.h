#pragma once

#include "CoreMinimal.h"
#include "IterativeWeightAdjustmentStrategy.h"
#include "UObject/ScriptInterface.h"
#include "K32ItemBoxIterativeWeightAdjustmentStrategy.generated.h"

class UCurveFloat;
class IWeightedElement;

UCLASS(Blueprintable, Abstract)
class UK32ItemBoxIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<TScriptInterface<IWeightedElement>> _selectedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _penaltyFromDistanceToClosestK32ItemBox;

public:
	UK32ItemBoxIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxIterativeWeightAdjustmentStrategy) { return 0; }
