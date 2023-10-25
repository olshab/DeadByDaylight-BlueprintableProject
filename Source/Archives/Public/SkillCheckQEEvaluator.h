#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "SkillCheckQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API USkillCheckQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _consecutiveOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _greatSkillCheckOnly;

private:
	UFUNCTION()
	void OnSkillCheckSuccess(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnSkillCheckFail(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	USkillCheckQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheckQEEvaluator) { return 0; }
