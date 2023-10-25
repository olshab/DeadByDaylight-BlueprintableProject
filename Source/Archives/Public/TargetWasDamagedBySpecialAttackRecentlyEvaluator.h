#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "TargetWasDamagedBySpecialAttackRecentlyEvaluator.generated.h"

UCLASS(Blueprintable)
class UTargetWasDamagedBySpecialAttackRecentlyEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeLimit;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _specialCaseGameEvents;

public:
	UTargetWasDamagedBySpecialAttackRecentlyEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UTargetWasDamagedBySpecialAttackRecentlyEvaluator) { return 0; }
