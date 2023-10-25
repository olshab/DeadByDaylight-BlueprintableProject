#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "Templates/SubclassOf.h"
#include "HasStatusEffectEvaluatorCondition.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _statusEffectList;

public:
	UHasStatusEffectEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasStatusEffectEvaluatorCondition) { return 0; }
