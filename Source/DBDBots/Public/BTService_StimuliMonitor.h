#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "AITunableParameter.h"
#include "UObject/NoExportTypes.h"
#include "BTService_StimuliMonitor.generated.h"

class AActor;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_StimuliMonitor : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStimulusOriginLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStimulusNavLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStimulusActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStimulusInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBStimulusWasInSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StimulusWasInSightDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StimuliRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtrapolateLoseSightDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshFindLocationExtents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeenFriendlyStimuliExpiryInSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForcedStimulusInSightDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, float> _seenFriendlyStimuli;

public:
	UBTService_StimuliMonitor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StimuliMonitor) { return 0; }
