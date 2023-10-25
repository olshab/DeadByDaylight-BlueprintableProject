#pragma once

#include "CoreMinimal.h"
#include "OfferingTriggerPositionData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingTriggerPositionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float PosX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float PosY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CardIndex;

public:
	DEADBYDAYLIGHT_API FOfferingTriggerPositionData();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingTriggerPositionData) { return 0; }
