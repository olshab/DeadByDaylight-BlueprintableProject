#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "HasDownedTargetAnyDebuffEffectEvaluator.generated.h"

UCLASS(Blueprintable)
class UHasDownedTargetAnyDebuffEffectEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _targetPreventingTags;

public:
	UHasDownedTargetAnyDebuffEffectEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasDownedTargetAnyDebuffEffectEvaluator) { return 0; }
