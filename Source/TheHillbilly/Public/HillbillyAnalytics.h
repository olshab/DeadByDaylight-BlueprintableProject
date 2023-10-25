#pragma once

#include "CoreMinimal.h"
#include "ChainsawEventWhileCamping.h"
#include "ChainsawEvent.h"
#include "ChainsawAnalytics.h"
#include "HillbillyAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FHillbillyAnalytics: public FChainsawAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawEvent> OverheatEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawEvent> OverheatWhileSprintingEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawEventWhileCamping> OverheatWhileCampingEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawEvent> RevFromZeroHeatEvents;

public:
	THEHILLBILLY_API FHillbillyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHillbillyAnalytics) { return 0; }
