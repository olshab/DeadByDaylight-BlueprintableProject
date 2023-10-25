#pragma once

#include "CoreMinimal.h"
#include "EInChaseTargetLogic.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "InChaseTargetStateTagEvaluatorCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class UInChaseTargetStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _gameplayTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EInChaseTargetLogic _logic;

public:
	UInChaseTargetStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UInChaseTargetStateTagEvaluatorCondition) { return 0; }
