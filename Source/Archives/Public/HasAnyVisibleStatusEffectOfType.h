#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "EMatchingStatusEffectType.h"
#include "HasAnyVisibleStatusEffectOfType.generated.h"

UCLASS(Blueprintable)
class UHasAnyVisibleStatusEffectOfType : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMatchingStatusEffectType _statusEffectOfType;

public:
	UHasAnyVisibleStatusEffectOfType();
};

FORCEINLINE uint32 GetTypeHash(const UHasAnyVisibleStatusEffectOfType) { return 0; }
