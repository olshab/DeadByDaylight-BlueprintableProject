#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_IsValidDestination.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_IsValidDestination : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UEnvQueryContext> QuerierContext;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue Invert;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue ExcludeEscapeZoneIfReverseBearTrapIsActivated;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue CheckDestinationOnDifferentNavMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NavDataAgentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavMeshProjectionBoxExtent;

public:
	UEnvQueryTest_IsValidDestination();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryTest_IsValidDestination) { return 0; }
