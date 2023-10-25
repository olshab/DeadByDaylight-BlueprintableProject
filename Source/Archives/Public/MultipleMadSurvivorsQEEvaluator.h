#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "MultipleMadSurvivorsQEEvaluator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UMultipleMadSurvivorsQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _requiredTier;

private:
	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<AActor>> _madSurvivors;

public:
	UMultipleMadSurvivorsQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleMadSurvivorsQEEvaluator) { return 0; }
