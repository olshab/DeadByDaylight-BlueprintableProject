#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "Templates/SubclassOf.h"
#include "AISkill_FindInteractable_K32ItemBox.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K32ItemBox : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BBK32EmpTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BBOriginalFocusedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> GoalClassesToGiveAdditionalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EmpTargetNearGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearEmpBoxGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearEmpBoxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 K32EmpMaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float K32ItemBoxChargeWeightRatio;

public:
	UAISkill_FindInteractable_K32ItemBox();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K32ItemBox) { return 0; }
