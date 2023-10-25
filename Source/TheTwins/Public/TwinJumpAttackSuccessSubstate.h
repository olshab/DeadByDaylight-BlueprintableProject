#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "DBDTunableRowHandle.h"
#include "TwinJumpAttackSuccessSubstate.generated.h"

UCLASS(Blueprintable)
class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _jumpSucceedAttachedCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _jumpSucceedNotAttachedCooldownTime;

public:
	UTwinJumpAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttackSuccessSubstate) { return 0; }
