#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "OniDashHitDiffInTimeQEEvaluator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UOniDashHitDiffInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _previousTarget;

public:
	UOniDashHitDiffInTimeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UOniDashHitDiffInTimeQEEvaluator) { return 0; }
