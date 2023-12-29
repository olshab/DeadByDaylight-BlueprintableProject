#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "SkillCheckQEEvaluator.generated.h"

UCLASS(Blueprintable)
class ARCHIVES_API USkillCheckQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _greatSkillCheckOnly;

public:
	USkillCheckQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheckQEEvaluator) { return 0; }
