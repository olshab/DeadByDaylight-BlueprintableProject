#pragma once

#include "CoreMinimal.h"
#include "K31PlayerDroneZoneStruct.generated.h"

class UK31PlayerZoneStatus;

USTRUCT(BlueprintType)
struct FK31PlayerDroneZoneStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 DistanceToDroneXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 DistanceToDroneZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPlayerInZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UK31PlayerZoneStatus* PlayerZoneStatus;

public:
	THEK31_API FK31PlayerDroneZoneStruct();
};

FORCEINLINE uint32 GetTypeHash(const FK31PlayerDroneZoneStruct) { return 0; }
