#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "MaxEventCountQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _incrementEventCount;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _decrementEventCount;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stopEventCount;

private:
	UFUNCTION()
	void OnStopEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnIncrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnDecrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UMaxEventCountQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UMaxEventCountQEEvaluator) { return 0; }
