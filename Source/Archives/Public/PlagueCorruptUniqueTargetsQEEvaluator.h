#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "PlagueCorruptUniqueTargetsQEEvaluator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPlagueCorruptUniqueTargetsQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _previousTarget;

public:
	UPlagueCorruptUniqueTargetsQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UPlagueCorruptUniqueTargetsQEEvaluator) { return 0; }
