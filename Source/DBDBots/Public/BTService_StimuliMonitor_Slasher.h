#pragma once

#include "CoreMinimal.h"
#include "BTService_StimuliMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AITunableParameter.h"
#include "BTService_StimuliMonitor_Slasher.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_StimuliMonitor_Slasher : public UBTService_StimuliMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInvestigateStimulusLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInvestigateStimulusActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBInBehaviorInvestigationStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsBlind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBChasedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter UseNextStimulusInvestigationAfterChaseDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IgnorePreviousChasedStimulusActorDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultStimulusToInvestigateMaxAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KOStimulusToInvestigateMaxAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NextStimulusInvestigationMinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CantSeeOverBlindRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FavorizeStandingTargetInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FavorizeStandingTargetOutRange;

public:
	UBTService_StimuliMonitor_Slasher();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StimuliMonitor_Slasher) { return 0; }
