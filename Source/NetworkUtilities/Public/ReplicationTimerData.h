#pragma once

#include "CoreMinimal.h"
#include "Float_NetQuantize8.h"
#include "ETimerState.h"
#include "ReplicationTimerData.generated.h"

USTRUCT(BlueprintType)
struct FReplicationTimerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Timestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloat_NetQuantize8 RemainingTimePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETimerState State;

public:
	NETWORKUTILITIES_API FReplicationTimerData();
};

FORCEINLINE uint32 GetTypeHash(const FReplicationTimerData) { return 0; }
