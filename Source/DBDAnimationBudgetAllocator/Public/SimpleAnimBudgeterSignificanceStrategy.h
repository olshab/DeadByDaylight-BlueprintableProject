#pragma once

#include "CoreMinimal.h"
#include "AnimBudgeterSignificanceStrategy.h"
#include "SimpleAnimBudgeterSignificanceStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USimpleAnimBudgeterSignificanceStrategy : public UAnimBudgeterSignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _tickEvenIfNotRendered;

public:
	USimpleAnimBudgeterSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USimpleAnimBudgeterSignificanceStrategy) { return 0; }
