#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.generated.h"

USTRUCT(BlueprintType)
struct FChainsawEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float ElapsedMatchTime;

public:
	THEHILLBILLY_API FChainsawEvent();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawEvent) { return 0; }
