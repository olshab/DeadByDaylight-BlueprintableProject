#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackObstructSubstate.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class THECANNIBAL_API UCannibalChainsawAttackObstructSubstate : public UBaseChainsawAttackObstructSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInTantrum;

public:
	UCannibalChainsawAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackObstructSubstate) { return 0; }
