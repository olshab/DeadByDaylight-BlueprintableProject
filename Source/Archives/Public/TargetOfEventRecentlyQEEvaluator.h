#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetOfEventRecentlyQEEvaluator.generated.h"

UCLASS(Blueprintable)
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _firstGameEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _secondEventOnSelf;

public:
	UTargetOfEventRecentlyQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetOfEventRecentlyQEEvaluator) { return 0; }
