#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "BonusTierTooltipVisibility.h"
#include "AtlantaCustomizedHudSettings.h"
#include "ConsoleUserSettings.generated.h"

USTRUCT(BlueprintType)
struct FConsoleUserSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FInputAxisKeyMapping> AxisMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 MenuScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 HudScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SkillCheckScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool LargeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool BloodwebInteractionBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool TerrorRadiusVisualFeedback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 FieldOfView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 Gamma;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HUDPlayerNamesVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HUDScoreEventsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HUDKillerHookCountVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool SurvivorSpecificPingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool LegacyPrestigePortraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool ChallengeProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool ChallengeCompletion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 MainVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 MenuMusicVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool UseHeadphones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool MuteOnFocusLost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HapticsVibrationPS5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 KillerMouseSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SurvivorMouseSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 KillerControllerSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SurvivorControllerSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool InvertY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool SurvivorInvertY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool KillerToggleInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool SurvivorToggleInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool SprintToCancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 HighestWeightSeenNews;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool UseAtlantaCustomizedHuds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool UseAtlantaSurvivorQuickTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool UseAtlantaKillerQuickTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasAcceptedCrossplayPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasAcceptedProgressionSystemInfoPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasAcceptedCrossProgressionPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FBonusTierTooltipVisibility BonusTierTooltipVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString PartyPrivacyState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 ColorBlindMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 ColorBlindModeIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool BeginnerMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool FogCommunications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Subtitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SubtitlesBackgroundOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 SubtitlesSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool IsAnonymousMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool AllowCopyrightedMusic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HideYourName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HideOtherNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HiddenMatchmakingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool HasAcceptedHapticsVibrationPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 PlayerCardAnimationMode;

public:
	DEADBYDAYLIGHT_API FConsoleUserSettings();
};

FORCEINLINE uint32 GetTypeHash(const FConsoleUserSettings) { return 0; }
