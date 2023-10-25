#pragma once

#include "CoreMinimal.h"
#include "ESubjectPerspective.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EventOccuredAndStayNearQuestEvaluator.generated.h"

UCLASS(Blueprintable)
class UEventOccuredAndStayNearQuestEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _triggerEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESubjectPerspective _instigatorPerspective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESubjectPerspective _targetPerspective;

public:
	UEventOccuredAndStayNearQuestEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UEventOccuredAndStayNearQuestEvaluator) { return 0; }
