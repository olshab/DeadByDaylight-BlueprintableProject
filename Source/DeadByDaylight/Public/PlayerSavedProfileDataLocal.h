#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPresetsList.h"
#include "DailyRitualSaveData.h"
#include "UIViewFlagSaveData.h"
#include "BloodWebPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "FearMarketOfferingInstance.h"
#include "PlayerLoadoutData.h"
#include "SavedStatsData.h"
#include "PlayerSavedProfileCumulativeData.h"
#include "CharacterCustomizationPresetsList.h"
#include "CharacterSavedProfileData.h"
#include "SpecialEventSavedData.h"
#include "ReleaseSavedData.h"
#include "PlayerSavedProfileDataLocal.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSavedProfileDataLocal
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Tokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Offerings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, bool> PageVisited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, bool> ChatVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, bool> OnboardingCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConsecutiveMatchStreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Wins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Losses;

	UPROPERTY(EditAnywhere)
	uint64 CurrentSeasonTicks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDailyRitualSaveData DailyRitualSaveData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUIViewFlagSaveData UIViewFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFearMarketOfferingInstance FearMarket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerLoadoutData LastConnectedLoadout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastConnectedCharacterIndex;

	UPROPERTY(EditAnywhere)
	FDateTime DisconnectPenaltyTime;

	UPROPERTY(EditAnywhere)
	FDateTime LastMatchEndTime;

	UPROPERTY(EditAnywhere)
	FDateTime LastMatchStartTime;

	UPROPERTY(EditAnywhere)
	FDateTime LastKillerMatchEndTime;

	UPROPERTY(EditAnywhere)
	FDateTime LastSurvivorMatchEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBloodWebPersistentData BloodStoreKillers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBloodWebPersistentData BloodStoreSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CrossplayAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoDeclineFriendInvites;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterCustomizationPresetsList> CharacterCustomizationPresets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterLoadoutPresetsList> CharacterLoadoutPresets;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPlayerSavedProfileCumulativeData _cumulativeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FSavedStatsData> _savedPlayerStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasBeenGivenKillerTutorialEndReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasBeenGivenSurvivorTutorialEndReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasSeenBloodpointsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasSeenAuricCellsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasSeenIridescentShardsOnboardingCurrencyPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasSeenLightSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasSeenMainMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<int32, FCharacterSavedProfileData> _characterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FName, FSpecialEventSavedData> _specialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<FName> _seenCinematics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<FName> _seenFeatures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FString, FReleaseSavedData> _releases;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _hasBeginnerTooltipsBeenDisabledAtLevel;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileDataLocal();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileDataLocal) { return 0; }
