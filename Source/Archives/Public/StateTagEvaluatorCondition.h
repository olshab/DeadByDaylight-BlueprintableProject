#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "StateTagEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _gameplayTag;

public:
	UStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UStateTagEvaluatorCondition) { return 0; }
