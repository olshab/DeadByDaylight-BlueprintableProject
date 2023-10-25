#pragma once

#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "TotemsAtEndTrialCountQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API UTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{
	GENERATED_BODY()

public:
	UTotemsAtEndTrialCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTotemsAtEndTrialCountQEEvaluator) { return 0; }
