#pragma once

#include "CoreMinimal.h"
#include "AIEnemyTracker.h"
#include "AIEnemyTracker_Survivor.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UAIEnemyTracker_Survivor : public UAIEnemyTracker
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TerrorRadiusDistanceRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChaseDistanceRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DownedAllyDistanceRange;

public:
	UAIEnemyTracker_Survivor();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTracker_Survivor) { return 0; }
