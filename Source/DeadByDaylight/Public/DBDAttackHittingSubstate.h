#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "DBDAttackSubstate.h"
#include "DBDAttackHittingSubstate.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDAttackHittingSubstate : public UDBDAttackSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _hittingPercentDamageBegin;

public:
	UDBDAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackHittingSubstate) { return 0; }
