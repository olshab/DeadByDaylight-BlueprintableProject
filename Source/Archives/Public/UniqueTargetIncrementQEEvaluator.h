#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "UniqueTargetIncrementQEEvaluator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<AActor>> _targetList;

public:
	UUniqueTargetIncrementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UUniqueTargetIncrementQEEvaluator) { return 0; }
