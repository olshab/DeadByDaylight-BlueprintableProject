#pragma once

#include "CoreMinimal.h"
#include "CameraShot.generated.h"

class ACameraShotType;

USTRUCT(BlueprintType)
struct FCameraShot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACameraShotType* CameraShotType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShotDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PriorityWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TrackSamplingNumberForObstructionComputation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ObstructionScore;

public:
	DBDPROCEDURALCAMERA_API FCameraShot();
};

FORCEINLINE uint32 GetTypeHash(const FCameraShot) { return 0; }
