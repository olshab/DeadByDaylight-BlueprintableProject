#pragma once

#include "CoreMinimal.h"
#include "K31DroneScoutDetectionSphereRaycastStruct.generated.h"

USTRUCT(BlueprintType)
struct FK31DroneScoutDetectionSphereRaycastStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BottomToTopPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleRadiusPercent;

public:
	THEK31_API FK31DroneScoutDetectionSphereRaycastStruct();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneScoutDetectionSphereRaycastStruct) { return 0; }
