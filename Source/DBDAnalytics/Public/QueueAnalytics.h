#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "QueueAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FQueueAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimesQueuedSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimesQueuedKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MatchesAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MatchesAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectedCountry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FirstTimePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeMatchesAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastMatchTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SessionStartTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SessionEndTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastSessionTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CumulativeSessions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CumulativePlaytime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInCharacterMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInBloodwebMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInLoadoutMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInCustomizationMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInFearMarket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInTallyScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInGameMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInHelpMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInOfflineLobby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInOfflineLobbySurvivorGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInOnlineLobby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeInOnlineLobbySurvivorGroup;

public:
	DBDANALYTICS_API FQueueAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FQueueAnalytics) { return 0; }
