#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_Lockbar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAISkill_FindInteractable_Lockbar : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LockerTopHeightDiffFromActorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LockbarMaxDistanceFromCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LockbarMaxDistanceFromCamperTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinLockbarWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxLockbarWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HighLockbarWeightLastSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinDistanceToReachMaxLockbarWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxDistanceToReachMinLockbarWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxDistanceToReachMinLockbarWeightIfNearGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxHeightDifferenceFromGenerator;

public:
	UAISkill_FindInteractable_Lockbar();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Lockbar) { return 0; }
