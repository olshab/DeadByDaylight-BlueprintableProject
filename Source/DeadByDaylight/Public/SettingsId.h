#pragma once

#include "CoreMinimal.h"
#include "SettingsId.generated.h"

UENUM()
enum class SettingsId : int64
{
	None = -1,
	Language,
	RevokeConsent,
	RevokeMarketingConsent,
	BhvrAccount,
	AllowCrossplayGeneric,
	AllowCrossplayLive,
	AutoDeclineFriendRequests,
	PlayerId,
	PartyPrivacy,
	Quality,
	AutoAdjust,
	Resolution,
	ScreenResolution,
	RenderSize,
	FullScreen,
	HUDConstrainedAspectRatio,
	VSync,
	AntiAliasingMode,
	EnableFSR,
	SharpnessValue,
	MenuScaleFactor,
	HudScaleFactor,
	SkillCheckScaleFactor,
	LargeText,
	BloodwebInteractionBehaviour,
	TerrorRadiusVisualFeedback,
	HUDPlayerNamesVisibility,
	HUDKillerHookCountVisibility,
	HUDScoreEventsVisibility,
	LegacyPrestigePortraits,
	ChallengeProgression,
	ChallengeCompletion,
	MainVolume,
	MenuMusicVolume,
	Headphones,
	MuteOnFocusLost,
	InvertYAxis,
	SurvivorMouseSensitivity,
	SurvivorControllerSensitivity,
	KillerMouseSensitivity,
	KillerControllerSensitivity,
	SurvivorToggleInteractions,
	KillerToggleInteractions,
	SprintToCancel,
	ColorBarPalette,
	ColorBlindMode,
	ColorBlindModeIntensity,
	BeginnerMode,
	Subtitles,
	SubtitlesBackgroundOpacity,
	SubtitlesSize,
	IsAnonymousMode,
	HideYourName,
	HideOtherNames,
	HiddenMatchmakingDelay,
	SurvivorCameraSensitivity,
	KillerCameraSensitivity,
	MenuMusicVolumeOn,
	MainVolumeOn,
	AimAssist,
	SurvivorQuickTurn,
	KillerQuickTurn,
	FPSLimit,
	AutoQuality,
	ControlType,
	CustomizedControls,
	DynamicResolution,
	InvertYAxisSurvivor,
	BetaWiggleSkillCheck,
	HapticsVibrationPS5,
};
