#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "WaitTimeAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FWaitTimeAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnterLobbyWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnterMatchWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchWaitStartUtc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchWaitStopUtc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyWaitStartUtc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyWaitStopUtc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyWaitStopReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameType GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartySize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RankDifference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DaysSinceReset;

public:
	DBDANALYTICS_API FWaitTimeAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FWaitTimeAnalytics) { return 0; }
