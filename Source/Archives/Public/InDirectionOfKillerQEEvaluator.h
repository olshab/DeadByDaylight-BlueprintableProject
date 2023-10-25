#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InDirectionOfKillerQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _killer;

public:
	UInDirectionOfKillerQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UInDirectionOfKillerQEEvaluator) { return 0; }
