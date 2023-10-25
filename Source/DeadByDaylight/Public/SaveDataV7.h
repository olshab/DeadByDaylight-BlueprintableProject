#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "SavedDailyRitualContainerV7.h"
#include "KeyTupleBool.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "ConsoleUserSettings.h"
#include "UObject/NoExportTypes.h"
#include "CharacterKeyTuple.h"
#include "SavedStatsDataV7.h"
#include "SavedFearMarketOfferingInstanceV7.h"
#include "SavedSpecialEventDataV7.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "SaveDataV7.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataV7: public FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString PlayerUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SelectedCamperIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SelectedSlasherIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FName> Offerings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool FirstTimePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 ConsecutiveMatchStreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasBeenGivenKillerTutorialEndReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasBeenGivenSurvivorTutorialEndReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasSeenBloodpointsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasSeenAuricCellsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasSeenIridescentShardsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, SaveGame)
	uint64 CurrentSeasonTicks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 LastConnectedCharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString DisconnectPenaltyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString LastMatchEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString LastMatchStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString LastKillerMatchEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString LastSurvivorMatchEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 Experience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 BonusExperience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 FearTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool FearTokensMigrated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString OngoingGameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> PageVisited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> ChatVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsSurvivorNoFriends;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsKillerNoFriends;

	UPROPERTY(EditAnywhere, SaveGame)
	FDateTime LastMatchTimestamp;

	UPROPERTY(EditAnywhere, SaveGame)
	FDateTime LastSessionTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeSessions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString CumulativePlaytime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharacterKeyTuple> CharacterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FName> OwnedCharms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FSavedDailyRitualContainerV7 DailyRituals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FSavedFearMarketOfferingInstanceV7 FearMarket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLegacySavedPlayerLoadoutData LastLoadout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FConsoleUserSettings ConsoleUserSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FSavedStatsDataV7> PlayerStatProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FString> OwnedContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FSavedSpecialEventDataV7> SpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreKillers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> OnBoardingCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool IsCrossplayAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool AutoDeclineFriendInvites;

public:
	DEADBYDAYLIGHT_API FSaveDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSaveDataV7) { return 0; }
