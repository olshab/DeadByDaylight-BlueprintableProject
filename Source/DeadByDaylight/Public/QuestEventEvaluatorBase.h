#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EConditionNeedsType.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.generated.h"

class ADBDPlayer;
class UEvaluatorCondition;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UQuestEventEvaluatorBase : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _dbdPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConditionNeedsType _conditionNeedsType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UEvaluatorCondition>> _evaluatorConditionsClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UEvaluatorCondition*> _evaluatorConditions;

protected:
	UFUNCTION()
	void OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UQuestEventEvaluatorBase();
};

FORCEINLINE uint32 GetTypeHash(const UQuestEventEvaluatorBase) { return 0; }
