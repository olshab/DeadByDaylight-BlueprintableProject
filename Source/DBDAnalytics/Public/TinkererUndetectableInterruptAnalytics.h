#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "TinkererUndetectableInterruptAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FTinkererUndetectableInterruptAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InterruptedSurvivorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InterruptingSlasherMirrorsId;

public:
	DBDANALYTICS_API FTinkererUndetectableInterruptAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FTinkererUndetectableInterruptAnalytics) { return 0; }
