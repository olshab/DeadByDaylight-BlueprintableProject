#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "PerkIdDropdown.h"
#include "AISkill.h"
#include "AISkill_PlotTwist.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_PlotTwist : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerkIdDropdown Perk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinimumDistanceFromKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinimumDistanceFromOtherSurvivor;

public:
	UAISkill_PlotTwist();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_PlotTwist) { return 0; }
