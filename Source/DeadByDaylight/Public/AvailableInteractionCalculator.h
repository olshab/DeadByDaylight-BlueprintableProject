#pragma once

#include "CoreMinimal.h"
#include "AvailableInteractionCalculator.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FAvailableInteractionCalculator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UInteractionDefinition*> _interactions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _fullEvaluationFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _maxFramesForFullEvaluation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _secondsBetweenNullReferenceCleanup;

public:
	DEADBYDAYLIGHT_API FAvailableInteractionCalculator();
};

FORCEINLINE uint32 GetTypeHash(const FAvailableInteractionCalculator) { return 0; }
