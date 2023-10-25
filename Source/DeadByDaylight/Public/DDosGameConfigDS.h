#pragma once

#include "CoreMinimal.h"
#include "DDosGameConfigDS.generated.h"

USTRUCT(BlueprintType)
struct FDDosGameConfigDS
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DDoSDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DDoSDetectionAnalytics;

public:
	DEADBYDAYLIGHT_API FDDosGameConfigDS();
};

FORCEINLINE uint32 GetTypeHash(const FDDosGameConfigDS) { return 0; }
