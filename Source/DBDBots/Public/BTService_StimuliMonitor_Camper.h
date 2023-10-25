#pragma once

#include "CoreMinimal.h"
#include "BTService_StimuliMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StimuliMonitor_Camper.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_StimuliMonitor_Camper : public UBTService_StimuliMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBTerrorPressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBIsFleeing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastValidTerrorRadiusStimulusMemoryLifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IgnoreNonKillerStimulusWhileInSprintDistanceSquared;

public:
	UBTService_StimuliMonitor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StimuliMonitor_Camper) { return 0; }
