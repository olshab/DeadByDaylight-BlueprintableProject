#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AIDetectedStimulus.h"
#include "EInteractionTargetRequirements.h"
#include "TargetMoveAwayToFastInfo.h"
#include "EInteractionTargetInSightModes.h"
#include "Templates/SubclassOf.h"
#include "AISkill_InteractionTarget.generated.h"

class AActor;
class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionTargetRequirements TargetRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoSwapBestStimulusWithBestTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartMaxHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StopMaxHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMaxHalfAngle2D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TestMaxHalfAngleOnPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UNavigationQueryFilter> MaxAngleFilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionTargetInSightModes InSightMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutOfSightModeDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetMoveAwayTooFastStopDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetMoveAwayTooFastCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AlwaysStrafeAroundTarget;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAIDetectedStimulus> _unfilteredTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAIDetectedStimulus> _filteredTargets;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, FTargetMoveAwayToFastInfo> _targetsMoveAwayTooFastInfo;

public:
	UAISkill_InteractionTarget();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget) { return 0; }
