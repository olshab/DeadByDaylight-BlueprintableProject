#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "Templates/SubclassOf.h"
#include "HasStatusEffectFromPlayerEvaluatorCondition.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class UHasStatusEffectFromPlayerEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _statusEffectList;

public:
	UHasStatusEffectFromPlayerEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UHasStatusEffectFromPlayerEvaluatorCondition) { return 0; }
