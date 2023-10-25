#pragma once

#include "CoreMinimal.h"
#include "AIRandomByDistancePercentagesAtTime.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_RandomByDistance.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_RandomByDistance : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBAroundLoc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBRelativeFromTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBRelativeToTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter StartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter EndDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PercentageAtStartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PercentageAtEndDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAIRandomByDistancePercentagesAtTime> PercentagesAtTimes;

public:
	UBTDecorator_RandomByDistance();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_RandomByDistance) { return 0; }
