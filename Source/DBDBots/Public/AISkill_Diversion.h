#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EAIDifficultyLevel.h"
#include "AISkill_Diversion.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Diversion : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PerkId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> DiversionFromGoalClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIDifficultyLevel ThrowOnInteractablesAtDifficultyLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxThrowOnInteractableHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMoveToTargetDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshFindLocationExtents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlanInterval;

public:
	UAISkill_Diversion();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Diversion) { return 0; }
