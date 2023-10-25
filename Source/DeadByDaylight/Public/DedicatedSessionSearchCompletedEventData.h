#pragma once

#include "CoreMinimal.h"
#include "DedicatedSessionSearchCompletedEventData.generated.h"

USTRUCT(BlueprintType)
struct FDedicatedSessionSearchCompletedEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString GameLiftSessionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString FleetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IpAddress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Port;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DnsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Region;

public:
	DEADBYDAYLIGHT_API FDedicatedSessionSearchCompletedEventData();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedSessionSearchCompletedEventData) { return 0; }
