#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ECustomValueComparator.h"
#include "CustomValueEvaluatorCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class UCustomValueEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _paramConditionKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomValueComparator _comparator;

public:
	UCustomValueEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UCustomValueEvaluatorCondition) { return 0; }
