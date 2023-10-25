#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_FindInteractable_CrushTwin.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class THETWINS_API UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAITunableParameter _crushVictorGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAITunableParameter _recoveringTimeEstimationErrorMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAITunableParameter _recoveringTimeEstimationErrorMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _destroyTwinMaxCharge;

public:
	UAISkill_FindInteractable_CrushTwin();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_CrushTwin) { return 0; }
