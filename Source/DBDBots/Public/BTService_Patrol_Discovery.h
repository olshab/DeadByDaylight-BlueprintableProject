#pragma once

#include "CoreMinimal.h"
#include "BTService_Patrol.h"
#include "BTService_Patrol_Discovery.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_Patrol_Discovery : public UBTService_Patrol
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RejectPatrolPointIfInPressureZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFindRandomLocationOnTileAttempts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FirstFindOnNbNeighborTiles;

public:
	UBTService_Patrol_Discovery();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_Patrol_Discovery) { return 0; }
