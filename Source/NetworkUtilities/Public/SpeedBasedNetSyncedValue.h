#pragma once

#include "CoreMinimal.h"
#include "SpeedBasedNetSyncedValue.generated.h"

USTRUCT(BlueprintType)
struct FSpeedBasedNetSyncedValue
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _replicatedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _replicatedSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _replicatedLastUpdateTimestamp;

public:
	NETWORKUTILITIES_API FSpeedBasedNetSyncedValue();
};

FORCEINLINE uint32 GetTypeHash(const FSpeedBasedNetSyncedValue) { return 0; }
