#pragma once

#include "CoreMinimal.h"
#include "BaseRecentEventEvaluatorCondition.h"
#include "HasEventNotHappenedEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UHasEventNotHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float timeLimitOverride;

public:
	UHasEventNotHappenedEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasEventNotHappenedEvaluatorCondition) { return 0; }
