#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Rendering/RenderingCommon.h"
#include "SharedAuthenticationTokenInformation.h"
#include "GameFramework/PlayerInput.h"
#include "AtlantaCustomizedHudSettings.h"
#include "BonusTierTooltipVisibility.h"
#include "OnSetAtlantaCustomizedHudsTimestamp.h"
#include "DBDGameUserSettings.generated.h"

class UDBDGameUserSettings;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInputAxisKeyMapping> AxisMappings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnSetAtlantaCustomizedHudsTimestamp OnSetCustomizedHudsTimestamp;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString DeviceLoginTokenID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ScalabilityLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool AutoScalabilitySet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool AutoAdjust;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ScreenRenderSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HUDConstrainedAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MenuScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 HudScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SkillCheckScaleFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool LargeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BloodwebInteractionBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool TerrorRadiusVisualFeedback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 FieldOfView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HUDPlayerNamesVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HUDKillerHookCountVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HUDScoreEventsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool LegacyPrestigePortraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ChallengeProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ChallengeCompletion;

	UPROPERTY(EditAnywhere)
	uint32 FPSLimitMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 AntiAliasingMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool EnableFSR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float SharpnessValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MainVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool MainVolumeOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 MenuMusicVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool MenuMusicVolumeOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool UseHeadphones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool MuteOnFocusLost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HapticsVibrationPS5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 KillerCameraSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SurvivorCameraSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 KillerMouseSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SurvivorMouseSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 KillerControllerSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SurvivorControllerSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool AimAssist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ControlType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool InvertY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SurvivorInvertY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool KillerToggleInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SurvivorToggleInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SprintToCancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool LanguageIsDefinedByPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 HighestWeightSeenNews;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSharedAuthenticationTokenInformation SharedLoginInformation;

	UPROPERTY(EditAnywhere)
	uint32 LastPanelContextId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ArchivesAutoPlayVoiceOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ArchivesFullscreenTextVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HasAcceptedCrossplayPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HasAcceptedProgressionSystemInfoPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HasAcceptedHapticsVibrationPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HasAcceptedCrossProgressionPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FBonusTierTooltipVisibility BonusTierTooltipVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool UseAtlantaCustomizedHuds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool UseAtlantaSurvivorQuickTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool UseAtlantaKillerQuickTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ShowPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString PartyPrivacyState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ColorBlindMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 ColorBlindModeIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BeginnerMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool FogCommunications;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool Subtitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SubtitlesBackgroundOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 SubtitlesSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool IsAnonymousMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool AllowCopyrightedMusic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HideYourName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HideOtherNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool HiddenMatchmakingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 PlayerCardAnimationMode;

public:
	UFUNCTION(BlueprintPure)
	bool GetTerrorRadiusVisualFeedback() const;

	UFUNCTION(BlueprintPure)
	int32 GetSkillCheckScaleFactor() const;

	UFUNCTION(BlueprintPure)
	int32 GetMenuScaleFactor() const;

	UFUNCTION(BlueprintPure)
	bool GetLegacyPrestigePortraits() const;

	UFUNCTION(BlueprintPure)
	bool GetLargeText() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDScoreEventsVisibility() const;

	UFUNCTION(BlueprintPure)
	int32 GetHudScaleFactor() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDPlayerNamesVisibility() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDKillerHookCountVisibility() const;

	UFUNCTION(BlueprintPure)
	int32 GetFieldOfView() const;

	UFUNCTION(BlueprintCallable)
	static UDBDGameUserSettings* GetDBDGameUserSettings();

	UFUNCTION(BlueprintPure)
	int32 GetColorBlindModeIntensity() const;

	UFUNCTION(BlueprintPure)
	EColorVisionDeficiency GetColorBlindMode() const;

	UFUNCTION(BlueprintPure)
	bool GetChallengeProgression() const;

	UFUNCTION(BlueprintPure)
	bool GetChallengeCompletion() const;

	UFUNCTION(BlueprintPure)
	bool GetBloodwebInteractionBehaviour() const;

public:
	UDBDGameUserSettings();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameUserSettings) { return 0; }
