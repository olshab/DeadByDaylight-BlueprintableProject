#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawEventWhileCamping.generated.h"

USTRUCT(BlueprintType)
struct FChainsawEventWhileCamping: public FChainsawEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DistanceFromClosestHook;

public:
	THEHILLBILLY_API FChainsawEventWhileCamping();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawEventWhileCamping) { return 0; }
