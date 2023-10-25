#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "HasRecentEventHappenedWhileInStateTagCondition.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API UHasRecentEventHappenedWhileInStateTagCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _gameEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTag _stateTag;

public:
	UHasRecentEventHappenedWhileInStateTagCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasRecentEventHappenedWhileInStateTagCondition) { return 0; }
