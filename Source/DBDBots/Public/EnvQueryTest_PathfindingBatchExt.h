#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_PathfindingBatchExt.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class DBDBOTS_API UEnvQueryTest_PathfindingBatchExt : public UEnvQueryTest_Pathfinding
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue ScanRangeMultiplier;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue BadPathingPenaltyMultiplier;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue MaxPenaltyAngle;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue MinPenaltyAngle;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue HeightMultiplier;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue PlayerLocationHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> TargetContext;

public:
	UEnvQueryTest_PathfindingBatchExt();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_PathfindingBatchExt) { return 0; }
