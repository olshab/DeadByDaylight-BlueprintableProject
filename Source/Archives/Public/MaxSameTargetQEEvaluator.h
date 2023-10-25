#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MaxSameTargetQEEvaluator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<AActor>, int32> _targetList;

public:
	UMaxSameTargetQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMaxSameTargetQEEvaluator) { return 0; }
