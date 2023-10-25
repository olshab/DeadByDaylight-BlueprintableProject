#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerStatusAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDedicatedServerStatusAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DSSessionProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameLiftSessionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SessionEndReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FleetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IpAddress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Port;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DnsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Region;

public:
	DBDANALYTICS_API FDedicatedServerStatusAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerStatusAnalytics) { return 0; }
