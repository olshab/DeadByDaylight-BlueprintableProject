#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindCollectable_Searchable.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable_SupplyCrate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISkill_FindCollectable_SupplyCrate : public UAISkill_FindCollectable_Searchable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UrgencyGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter OpenedWeightMultiplier;

public:
	UAISkill_FindCollectable_SupplyCrate();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_SupplyCrate) { return 0; }
