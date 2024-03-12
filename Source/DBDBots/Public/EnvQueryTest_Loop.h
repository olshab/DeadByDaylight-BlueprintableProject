#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "AITunableParameter.h"
#include "EnvQueryTest_Loop.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Loop : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere)
	FAIDataProviderFloatValue TowardLoopAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinSafetyRatingAgainstMeleeHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinSafetyRatingAgainstRangedHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ExtraMinSafetyRatingAgainstFastVaultHostileStimulus;

public:
	UEnvQueryTest_Loop();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_Loop) { return 0; }
