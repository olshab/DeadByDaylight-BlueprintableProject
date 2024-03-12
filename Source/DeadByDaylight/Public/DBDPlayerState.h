#pragma once

#include "CoreMinimal.h"
#include "StatusViewSource.h"
#include "EGameState.h"
#include "PlayerflowEventsNotifier.h"
#include "OnPlayerGameStateChanged.h"
#include "GameFramework/PlayerState.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "PlayerGameplayEventDelegate.h"
#include "AIFinishedPlayingEvent.h"
#include "PlayerStateData.h"
#include "GameEventData.h"
#include "EPlatformFlag.h"
#include "CharacterStateData.h"
#include "AwardedScores.h"
#include "AwardedScore.h"
#include "UserGameStats.h"
#include "OngoingScoreData.h"
#include "EquippedPlayerCustomization.h"
#include "EProviderFlag.h"
#include "StreamerModePlayerData.h"
#include "EBotReplacementState.h"
#include "EDBDScoreTypes.h"
#include "ScoreEventData.h"
#include "GameplayTagContainer.h"
#include "EndOfMatchRPCData.h"
#include "DBDPlayerState.generated.h"

class UDSQuestEventsHandlerComponent;
class AActor;
class UDedicatedServerHandlerComponent;
class UGameplayNotificationManager;
class UCharacterStatsHandlerComponent;
class UPlayerScoreComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDPlayerState : public APlayerState, public IPlayerflowEventsNotifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAIFinishedPlayingEvent OnAIFinishedPlayingEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	FString MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString ContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BotDifficultyLevel, Transient)
	EAIDifficultyLevel _difficultyLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient)
	bool IsPlayerReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient)
	EPlayerRole GameRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UDedicatedServerHandlerComponent* DedicatedServerHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UDSQuestEventsHandlerComponent* DSQuestEventsHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient)
	FCharacterStateData CamperData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData)
	FCharacterStateData SlasherData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData)
	FPlayerStateData PlayerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPlayerGameplayEventDelegate OnPlayerGameplayEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerGameStateChanged OnPlayerGameStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FAwardedScores> _awardedScoresByType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUserGameStats _cachedUserGameStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOngoingScoreData> _ongoingScoreEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	bool _inParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _endOfMatchRpcReceived;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CustomizationData)
	FEquippedPlayerCustomization _playerCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient)
	int32 _selectedCamperIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient)
	int32 _selectedSlasherIndex;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGameplayNotificationManager* _gameplayNotificationManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCharacterStatsHandlerComponent* _characterStatsHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPlayerScoreComponent* _playerScoreComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient, meta=(AllowPrivateAccess=true))
	FString _platformAccountId;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DisplayData, Transient)
	EPlatformFlag _platform;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DisplayData, Transient)
	EProviderFlag _provider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient, meta=(AllowPrivateAccess=true))
	bool _crossplayAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient, meta=(AllowPrivateAccess=true))
	bool _offNetworkFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DisplayData, Transient, meta=(AllowPrivateAccess=true))
	FStreamerModePlayerData _streamerModePlayerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _gameLevelLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _showPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _hasActiveSubscription;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	uint32 _matchmakingIncentive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _pktLossPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsReplacementBot, Transient, meta=(AllowPrivateAccess=true))
	bool _isReplacementBot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _replacementBotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _disconnectedPlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _hasActiveDSQuestUpdate;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateOngoingScores();

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_CheatSelectSurvivor(int32 camperIndex);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_CheatSelectKiller(int32 slasherIndex);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsReplacementBot();

public:
	UFUNCTION(BlueprintCallable)
	void OnRep_DisplayData();

	UFUNCTION(BlueprintCallable)
	void OnRep_CustomizationData();

	UFUNCTION(BlueprintCallable)
	void OnRep_BotDifficultyLevel();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetInParadise();

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetBotInfoInCachedPlayerScore(bool isBot, bool isReplacementBot, const FString& replacementBotName);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetAsLeftMatch(EBotReplacementState botReplacementState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetAsDisconnected(EBotReplacementState botReplacementState);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FireGameplayEventWithScore(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, const FAwardedScore& awardedScore);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target);

public:
	UFUNCTION(BlueprintPure)
	bool IsInFinishedPlayingState() const;

	UFUNCTION(BlueprintCallable)
	bool HasEscaped() const;

	UFUNCTION(BlueprintPure)
	EGameState GetPlayerGameState() const;

	UFUNCTION(BlueprintPure)
	EPlayerRole GetGameRole() const;

	UFUNCTION(BlueprintPure)
	UGameplayNotificationManager* GetGameplayNotificationManager() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireScoreEvent(EDBDScoreTypes scoreType, float percentToAward);

	UFUNCTION(BlueprintCallable)
	void FireActiveStatusViewEvent(FName statusViewID, FName uniqueSourceID, const FStatusViewSource statusViewSource);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void FireActiveStatusEffectEvent(FName statusEffectID, float percentage, int32 iconFilePathIndex, int32 levelToDisplay);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_UpdateWallet(const FString& currencyId, int32 amount);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetInParadise();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetHasActiveDSQuestUpdate(bool isEnabled);

protected:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetGameRole(EPlayerRole newRole);

private:
	UFUNCTION(Client, Reliable)
	void Client_SetDSKickedOutReason(const uint32 reason);

public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_RemoveItemFromInventory(FName toRemove, bool updateLoadout);

	UFUNCTION(Client, Reliable)
	void Client_RemotelyDispatchGameEventWithScore(const FGameplayTag& gameEventType, const FGameEventData& gameEventData, const FAwardedScore& awardedScore);

	UFUNCTION(Client, Reliable)
	void Client_RemotelyDispatchGameEvent(const FGameplayTag& gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_InvalidateIncentives();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_HandleEscapeScoreEvent();

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_HandleEndOfMatch(bool success, const FEndOfMatchRPCData& response);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_FireQuestRepetitionValueChangeEvent(int32 repetition, const FString& questEventId);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_FetchCoreRituals(bool hasClaimableRitual);

public:
	UFUNCTION(BlueprintCallable)
	void ChangeStartingGameRole(EPlayerRole gameRoleNew);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EndOngoingScoreEvent(FGameplayTag scoreTypeTag);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CancelOngoingScoreEvent(FGameplayTag scoreTypeTag);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerState) { return 0; }
