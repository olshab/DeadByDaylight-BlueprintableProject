#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "WithPulledUpPalletQEEvaluator.generated.h"

class APallet;

UCLASS(Blueprintable)
class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<APallet*> _resetPallets;

public:
	UWithPulledUpPalletQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UWithPulledUpPalletQEEvaluator) { return 0; }
