#pragma once

#include "CoreMinimal.h"
#include "MatchmakingAnalytics.h"
#include "MatchmakingLobbyAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingLobbyAnalytics: public FMatchmakingAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

public:
	DBDANALYTICS_API FMatchmakingLobbyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingLobbyAnalytics) { return 0; }
