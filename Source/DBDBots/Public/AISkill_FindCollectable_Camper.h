#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Camper.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectUnderItemWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectOverWeightRatioDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter WantToKeepEmptyItemPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CloseItemDistThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CloseItemWeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ItemGoalWeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmptyItemChargeThreshold;

public:
	UAISkill_FindCollectable_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_Camper) { return 0; }
