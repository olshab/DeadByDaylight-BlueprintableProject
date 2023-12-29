#pragma once

#include "CoreMinimal.h"
#include "S3AnalyticsConfig.h"
#include "S3FriendsListGameConfig.h"
#include "ArchivesConfig.h"
#include "BalanceToolGameConfig.h"
#include "DedicatedServerGameConfig.h"
#include "BotMatchConfig.h"
#include "S3BeginnerTutorialLevelConfig.h"
#include "S3DLCConfig.h"
#include "S3KrakenSdkValidationConfig.h"
#include "S3MatchConfig.h"
#include "S3OnlineConfig.h"
#include "HitValidationGameConfig.h"
#include "AnimBudgeterGameConfig.h"
#include "JwtGameConfig.h"
#include "S3LoadingConfig.h"
#include "S3DisconnectionBotReplacementConfig.h"
#include "S3MirrorsDefaultRetryPolicyConfig.h"
#include "S3SecurityConfig.h"
#include "S3ContentVersionConfig.h"
#include "S3GameConfigsData.generated.h"

USTRUCT(BlueprintType)
struct FS3GameConfigsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3AnalyticsConfig Analytics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchivesConfig Archives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBalanceToolGameConfig BalanceTool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool BalanceTool_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3BeginnerTutorialLevelConfig BeginnerTutorialLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBotMatchConfig BotMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDedicatedServerGameConfig DedicatedServer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3DLCConfig Dlc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableNetAsyncLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnablePlayersConnectionStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnablePlayerIdInSurvey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableBotsInCustomMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableNavigationDuringMatchmaking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RTMTimeoutThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GameLoadingTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableHapticVibration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableWinGDKAccountMismatchPopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAntiMoveHack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnablePostIISCinematic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnablePlayStationTrophiesIISSync;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, bool> CrossPromoManagerPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool CrossPromoManagerPlatforms_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3FriendsListGameConfig FriendsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitValidationGameConfig HitValidation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimBudgeterGameConfig AnimBudgeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool AnimBudgeter_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FJwtGameConfig Jwt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3MatchConfig Match;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3LoadingConfig Loading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, bool> MatchmakingCrossplayPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3MirrorsDefaultRetryPolicyConfig MirrorsDefaultRetryPolicy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3OnlineConfig Online;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3SecurityConfig Security;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3KrakenSdkValidationConfig KrakenSdkValidation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3ContentVersionConfig ContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS3DisconnectionBotReplacementConfig DisconnectionBotReplacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, bool> SocialCrossfriendsPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, bool> SocialCrossprogressionPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableMoriPreviewButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAntiCamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableConsumableQueryFromKraken;

public:
	DEADBYDAYLIGHT_API FS3GameConfigsData();
};

FORCEINLINE uint32 GetTypeHash(const FS3GameConfigsData) { return 0; }
