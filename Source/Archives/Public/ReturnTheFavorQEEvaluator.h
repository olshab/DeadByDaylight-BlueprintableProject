#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ReturnTheFavorQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, Abstract)
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSet<FGameplayTag> _favorToReturnEvents;

	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _instigatorList;

public:
	UReturnTheFavorQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UReturnTheFavorQEEvaluator) { return 0; }
