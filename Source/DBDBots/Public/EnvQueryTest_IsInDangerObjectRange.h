#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsInDangerObjectRange.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_IsInDangerObjectRange : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue Invert;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue MustHaveDangerVision;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue CheckIfAnyBodyPartInDangerArea;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue UseCrouchHeight;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue SurvivorStandHeight;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue SurvivorCrouchHeight;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue SurvivorRadius;

public:
	UEnvQueryTest_IsInDangerObjectRange();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_IsInDangerObjectRange) { return 0; }
