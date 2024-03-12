#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackOpenSubstate.h"
#include "DBDTunableRowHandle.h"
#include "HillbillyChainsawAttackOpenSubstate.generated.h"

UCLASS(Blueprintable)
class THEHILLBILLY_API UHillbillyChainsawAttackOpenSubstate : public UBaseChainsawAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _longDashDuration;

public:
	UHillbillyChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackOpenSubstate) { return 0; }
