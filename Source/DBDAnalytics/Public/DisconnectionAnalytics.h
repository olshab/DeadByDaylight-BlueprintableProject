#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DisconnectionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDisconnectionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	double TimeSinceLastPacket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GameFlowStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnrealMapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FailureType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

public:
	DBDANALYTICS_API FDisconnectionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDisconnectionAnalytics) { return 0; }
