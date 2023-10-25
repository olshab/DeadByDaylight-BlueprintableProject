#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_LineOfSight.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_LineOfSight : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> ToContext;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue ItemHeightOffset;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue Invert;

public:
	UEnvQueryTest_LineOfSight();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_LineOfSight) { return 0; }
