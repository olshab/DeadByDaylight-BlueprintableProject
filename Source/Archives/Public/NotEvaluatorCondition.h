#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "Templates/SubclassOf.h"
#include "NotEvaluatorCondition.generated.h"

UCLASS(Blueprintable, Abstract)
class UNotEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEvaluatorCondition> _conditionToNegateClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEvaluatorCondition* _conditionPrivate;

public:
	UNotEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UNotEvaluatorCondition) { return 0; }
