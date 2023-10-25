#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "ESkillCheckCustomType.h"
#include "IgnoreSkillCheckTypesEvaluatorCondition.generated.h"

UCLASS(Blueprintable)
class UIgnoreSkillCheckTypesEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _ignoreAllButConsideredTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<ESkillCheckCustomType> _consideredTypes;

public:
	UIgnoreSkillCheckTypesEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIgnoreSkillCheckTypesEvaluatorCondition) { return 0; }
