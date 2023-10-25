#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_InteractionBreakFreeFromChains.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISkill_InteractionBreakFreeFromChains : public UAISkill_Interaction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _breakFreeFromChainsMaxCharge;

public:
	UAISkill_InteractionBreakFreeFromChains();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionBreakFreeFromChains) { return 0; }
