#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawHitWithPowerCharge.h"
#include "ChainsawAnalytics.h"
#include "CannibalAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCannibalAnalytics: public FChainsawAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawHitWithPowerCharge> HitWithPowerChargeEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FChainsawEvent> RevToTantrumEvents;

public:
	THECANNIBAL_API FCannibalAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCannibalAnalytics) { return 0; }
