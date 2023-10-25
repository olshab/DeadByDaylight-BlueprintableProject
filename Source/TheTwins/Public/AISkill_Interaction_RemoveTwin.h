#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_Interaction_RemoveTwin.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class THETWINS_API UAISkill_Interaction_RemoveTwin : public UAISkill_Interaction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _removeTwinMaxCharge;

public:
	UAISkill_Interaction_RemoveTwin();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_RemoveTwin) { return 0; }
