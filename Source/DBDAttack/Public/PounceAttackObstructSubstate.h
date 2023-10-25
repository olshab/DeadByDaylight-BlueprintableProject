#pragma once

#include "CoreMinimal.h"
#include "DBDAttackObstructSubstate.h"
#include "PounceAttackObstructSubstate.generated.h"

UCLASS(Blueprintable)
class DBDATTACK_API UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _fullObstructMontage;

public:
	UPounceAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackObstructSubstate) { return 0; }
