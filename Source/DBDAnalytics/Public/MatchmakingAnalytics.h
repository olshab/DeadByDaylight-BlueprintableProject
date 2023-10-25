#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "MatchmakingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchmakingSessionGuid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameType GameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartySize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

public:
	DBDANALYTICS_API FMatchmakingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingAnalytics) { return 0; }
