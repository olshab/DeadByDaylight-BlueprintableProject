#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_ApproachLureableDangerObject.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_ApproachLureableDangerObject : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> TargetContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TowardDangerObjectMaxAngle;

public:
	UEnvQueryTest_ApproachLureableDangerObject();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_ApproachLureableDangerObject) { return 0; }
