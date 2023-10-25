#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DDoSDetectionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDDoSDetectionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Severity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NonConnPacketCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NetConnPacketCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DisconnPacketCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BadPacketCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ErrorPacketCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DroppedPacketCounter;

public:
	DBDANALYTICS_API FDDoSDetectionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDDoSDetectionAnalytics) { return 0; }
