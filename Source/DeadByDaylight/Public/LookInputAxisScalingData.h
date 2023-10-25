#pragma once

#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "LookInputAxisScalingData.generated.h"

USTRUCT(BlueprintType)
struct FLookInputAxisScalingData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDBDTimer ScalingTimer;

public:
	DEADBYDAYLIGHT_API FLookInputAxisScalingData();
};

FORCEINLINE uint32 GetTypeHash(const FLookInputAxisScalingData) { return 0; }
