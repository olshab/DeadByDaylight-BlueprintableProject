#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIRandomByDistancePercentagesAtTime.generated.h"

USTRUCT(BlueprintType)
struct FAIRandomByDistancePercentagesAtTime
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PercentageAtStartDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PercentageAtEndDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AtRelativeTime;

public:
	DBDBOTS_API FAIRandomByDistancePercentagesAtTime();
};

FORCEINLINE uint32 GetTypeHash(const FAIRandomByDistancePercentagesAtTime) { return 0; }
