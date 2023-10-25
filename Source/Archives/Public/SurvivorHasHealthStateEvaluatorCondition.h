#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ECamperDamageState.h"
#include "SurvivorHasHealthStateEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class USurvivorHasHealthStateEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ECamperDamageState _specifiedDamageState;

public:
	USurvivorHasHealthStateEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHasHealthStateEvaluatorCondition) { return 0; }
