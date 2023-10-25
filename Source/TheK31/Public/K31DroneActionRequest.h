#pragma once

#include "CoreMinimal.h"
#include "ActionPredictionKey.h"
#include "K31DroneActionRequest.generated.h"

class UK31DroneBaseAction;
class AK31Drone;

USTRUCT(BlueprintType)
struct FK31DroneActionRequest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UK31DroneBaseAction* Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AK31Drone* Drone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionPredictionKey PredictionKey;

public:
	THEK31_API FK31DroneActionRequest();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneActionRequest) { return 0; }
