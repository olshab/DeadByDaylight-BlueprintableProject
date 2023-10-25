#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasInteractedMapTrackedInteractorQEEvaluator.generated.h"

class UActorKnowledgeCollection;
class AActor;

UCLASS(Blueprintable)
class UHasInteractedMapTrackedInteractorQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnActorTrackedByMap(UActorKnowledgeCollection* knowledgeCollection, AActor* newActor);

public:
	UHasInteractedMapTrackedInteractorQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasInteractedMapTrackedInteractorQEEvaluator) { return 0; }
