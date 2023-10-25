#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackObstructSubstate.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class THECANNIBAL_API UCannibalChainsawAttackObstructSubstate : public UHillbillyChainsawAttackObstructSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInTantrum;

public:
	UCannibalChainsawAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackObstructSubstate) { return 0; }
