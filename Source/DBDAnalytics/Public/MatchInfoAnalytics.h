#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "MatchInfoAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMatchInfoAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameType GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsABot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BotId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIDifficultyLevel BotDifficultyLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartySize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Pips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PipsTotal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MapSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PartyHostMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectedCountry;

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
	float ExactPing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasAnActiveArchiveQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUsingKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ControllerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ColorblindMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ColorblindIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TerrorRadiusVisualSupport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTutorialBotMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OnboardingModeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingABTestingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingNumberActiveModes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnboardingNewAssignedMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerSessionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerRegion;

public:
	DBDANALYTICS_API FMatchInfoAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchInfoAnalytics) { return 0; }
