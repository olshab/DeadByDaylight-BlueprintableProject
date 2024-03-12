#pragma once

#include "CoreMinimal.h"
#include "EGameTypeModifierName.generated.h"

UENUM(BlueprintType)
enum class EGameTypeModifierName : uint8
{
	Invalid,
	AllowsAchievementProgression,
	AllowsBloodpointGain,
	AllowsItemAddons,
	AllowsProgression,
	CanTransitionToStore,
	CanUseBetaFeatures,
	CanZoomOnCharms,
	CreatesSession,
	IsMultiplayer,
	KeepsItemAfterGame,
	LocksPerksUntilProgression,
	MenuNavigationDataHasRoleSuffix,
	RequiresKillerOfflineLobby,
	SendsAnalyticsForBotPlayer,
	SendsGameStartEvent,
	SendsHookedAnalytics,
	SupportsCommentator,
	SupportsGameplaySpawners,
	SupportsMatchIncentives,
	SupportsMatchmakingBan,
	SupportsObsession,
	UsesMatchmaking,
	AllowsChangingRole,
	AllowsLoadout,
	AllowsQuestProgression,
	CanDisableFogOverrides,
	CanUseActiveSpecialEvent,
	ForcesDefaultCustomization,
	HasMatchRules,
	IsABotMatchType,
	IsLimitedTimeExperience,
	ModifiesGamePreset,
	PartySupportsBothRoles,
	PerksAreMaximumLevel,
	RequiresDataBackup,
	SendsExtraOnboardingAnalytics,
	SupportsBots,
	SupportsSecretBots,
	UsesOnlineModeLoadout,
	MaxAllowedObservers,
	MaxKillersToStartMatch,
	MaxSurvivorsToStartMatch,
	MinKillersToStartMatch,
	MinSurvivorsToStartMatch,
	NumLoadoutPresets,
	InGameChestCountModifier,
	AllowsLoadoutItemAddons,
	AllowsLoadoutItems,
	AllowsLoadoutOfferings,
	AllowsLoadoutPerks,
	AudioGroupState,
	LevelLightingOverride,
	MenuNavigationDataPrefix,
	DisabledInventory,
	DisabledPanelTabs,
	GrantedCharacters,
};