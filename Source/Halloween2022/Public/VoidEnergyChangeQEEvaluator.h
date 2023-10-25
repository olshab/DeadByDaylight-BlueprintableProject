#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "VoidEnergyChangeQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UVoidEnergyChangeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void ListenToOnComponentAddedEvent();

public:
	UVoidEnergyChangeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyChangeQEEvaluator) { return 0; }
