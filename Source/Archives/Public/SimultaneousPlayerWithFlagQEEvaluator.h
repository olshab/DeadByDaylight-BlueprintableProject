#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SimultaneousPlayerWithFlagQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class USimultaneousPlayerWithFlagQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _inGamePlayers;

	UPROPERTY(EditAnywhere)
	FGameplayTag _modifierFlag;

public:
	USimultaneousPlayerWithFlagQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USimultaneousPlayerWithFlagQEEvaluator) { return 0; }
