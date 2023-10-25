#pragma once

#include "CoreMinimal.h"
#include "EAttackerSubject.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "EAttackType.h"
#include "IsEventAttackOfTypeQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API UIsEventAttackOfTypeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _attackEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackerSubject _attackerSubject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EAttackType> _attackOfType;

public:
	UIsEventAttackOfTypeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UIsEventAttackOfTypeQEEvaluator) { return 0; }
