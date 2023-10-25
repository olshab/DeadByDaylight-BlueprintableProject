#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SpendTimeWithStateTagQEEvaluator.generated.h"

UCLASS(Blueprintable)
class USpendTimeWithStateTagQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTags;

public:
	USpendTimeWithStateTagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USpendTimeWithStateTagQEEvaluator) { return 0; }
