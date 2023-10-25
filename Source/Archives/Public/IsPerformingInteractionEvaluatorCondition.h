#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "IsPerformingInteractionEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UIsPerformingInteractionEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _semanticTags;

public:
	UIsPerformingInteractionEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsPerformingInteractionEvaluatorCondition) { return 0; }
