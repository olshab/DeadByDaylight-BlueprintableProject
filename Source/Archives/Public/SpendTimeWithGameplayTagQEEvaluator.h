#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "SpendTimeWithGameplayTagQEEvaluator.generated.h"

UCLASS(Blueprintable)
class USpendTimeWithGameplayTagQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _incrementOnOtherPlayers;

public:
	USpendTimeWithGameplayTagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USpendTimeWithGameplayTagQEEvaluator) { return 0; }
