#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_Basement.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Basement : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue BasementBottomPenalty;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue ApplyEnteringPenaltyIfAlreadyInside;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue EnteringBasementFixedPenalty;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue Invert;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue BasementBoxExtentShrink;

public:
	UEnvQueryTest_Basement();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_Basement) { return 0; }
