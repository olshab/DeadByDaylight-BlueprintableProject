#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "SavedDailyRitualContainerV7.h"
#include "KeyTupleBool.h"
#include "ConsoleUserSettings.h"
#include "UObject/NoExportTypes.h"
#include "CharacterKeyTuple.h"
#include "CharacterLoadoutPresetsList.h"
#include "SavedStatsDataV7.h"
#include "DailyRitualSaveData.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "SavedFearMarketOfferingInstanceV7.h"
#include "SavedSpecialEventDataV8.h"
#include "SavedReleaseDataV8.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "UIViewFlagSaveData.h"
#include "CharacterCustomizationPresetsList.h"
#include "SaveDataV8.generated.h"

USTRUCT(BlueprintType)
struct FSaveDataV8: public FSaveDataBase
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
	bool HasSeenLightSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasSeenMainMenu;

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
	int32 CumulativeMatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> PageVisited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> ChatVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesLeftAsSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesAsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 CumulativeMatchesLeftAsKiller;

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
	TArray<FSavedSpecialEventDataV8> SpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FSavedReleaseDataV8> Releases;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TSet<FName> SeenCinematics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TSet<FName> SeenFeatures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreKillers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FKeyTupleBool> OnBoardingCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FDailyRitualSaveData DailyRitualSaveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FUIViewFlagSaveData UIViewFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool IsCrossplayAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool AutoDeclineFriendInvites;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasBeginnerTooltipsBeenDisabledAtLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool ShowPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharacterCustomizationPresetsList> CharacterCustomizationPresets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FCharacterLoadoutPresetsList> CharacterLoadoutPresets;

public:
	DEADBYDAYLIGHT_API FSaveDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSaveDataV8) { return 0; }
