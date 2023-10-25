#pragma once

#include "CoreMinimal.h"
#include "GameflowEventsNotifier.h"
#include "OnSlasherSetDelegate.h"
#include "GameFramework/GameState.h"
#include "OnKillerIntroCompletePercentChanged.h"
#include "EIntroState.h"
#include "EscapeDoorActivatedEvent.h"
#include "BuiltLevelData.h"
#include "OfferingData.h"
#include "LightingGeneratedEvent.h"
#include "ObsessionChangedDynamicDelegate.h"
#include "AllPlayerLoadedEvent.h"
#include "SlasherSetEvent.h"
#include "ActivatedGeneratorCountChangedDynamicEvent.h"
#include "EServerUseNetAsyncLoading.h"
#include "UObject/NoExportTypes.h"
#include "GamePresetData.h"
#include "UObject/SoftObjectPtr.h"
#include "EEndGameReason.h"
#include "EGameState.h"
#include "SelectedOffering.h"
#include "DBDGameState.generated.h"

class UCharacterCollection;
class ASlasherPlayer;
class ADBDPlayer;
class UDBDDangerPredictionComponent;
class UOnScreenDebugComponent;
class UInGameAssetPreloaderComponent;
class ADBDPlayerState_Menu;
class UServerTimeProviderComponent;
class USpecialEventGameplaySpawnerComponent;
class USpecialBehaviourGameplaySpawnerComponent;
class AMeatHook;
class URenderingFeaturesSequencer;
class AClipManager;
class AFadeManager;
class ASearchable;
class AGenerator;
class ACamperPlayer;
class ATotem;
class AEscapeDoor;
class ABreakableBase;
class AHatch;
class UActorPairQueryEvaluatorComponent;
class AReverseBearTrapRemover;
class APallet;
class ABaseTrap;
class AWindow;
class ALocker;
class UAkAudioBank;
class AInteractable;
class UObject;
class UEndGameStateComponent;
class UScourgeHookManagerComponent;
class UCollectableCollection;
class APawn;
class ADBDPlayerState;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDGameState : public AGameState, public IGameflowEventsNotifier
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlasherSetMultiDelegate, ASlasherPlayer*, SlasherPlayer);

	DECLARE_DYNAMIC_DELEGATE(FOnLevelReadyToPlayDelegate);

	DECLARE_DYNAMIC_DELEGATE(FOnIntroCompleteDelegate);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, Transient)
	FEscapeDoorActivatedEvent OnEscapeDoorActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EIntroState IntroState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnKillerIntroCompletePercentChanged OnKillerIntroCompletePercentChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FLightingGeneratedEvent OnLightingGenerated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	USpecialEventGameplaySpawnerComponent* _specialEventGameplaySpawnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	USpecialBehaviourGameplaySpawnerComponent* _specialBehaviourGameplaySpawnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAllPlayerLoadedEvent AuthorityOnAllPlayerLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FActivatedGeneratorCountChangedDynamicEvent OnActivatedGeneratorCountChangedDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FSlasherSetEvent OnSlasherSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FObsessionChangedDynamicDelegate OnObsessionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SecondsLeftInLobby, Transient)
	int32 SecondsLeftInLobby;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASlasherPlayer* Slasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	URenderingFeaturesSequencer* _renderingSequencer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _camperHookedInBasementCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_UseNetAsyncLoading, Transient, meta=(AllowPrivateAccess=true))
	EServerUseNetAsyncLoading _useNetAsyncLoading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GameLevelLoadingStarted, Transient, meta=(AllowPrivateAccess=true))
	bool _gameLevelLoadingStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BuildLevelData, Transient, meta=(AllowPrivateAccess=true))
	FBuiltLevelData _builtLevelData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FOfferingData _levelOfferings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AClipManager* _clipManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AFadeManager* _fadeManager;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_SessionId, Transient)
	FGuid _sessionId;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_LobbyId, Transient)
	FGuid _lobbyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ActivatedGeneratorCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _activatedGeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_RequiredActivatedGeneratorCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _requiredActivatedGeneratorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_EscapeDoorActivated, Transient, meta=(AllowPrivateAccess=true))
	bool _escapeDoorActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _escapeDoorOpened;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HatchOpened, Transient, meta=(AllowPrivateAccess=true))
	bool _isHatchOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OnLevelReadyToPlay, Transient, meta=(AllowPrivateAccess=true))
	bool _levelReadyToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _playerDistributionReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _usingWeakenedMechanic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorLeft, Transient, meta=(AllowPrivateAccess=true))
	int32 _survivorLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AMeatHook*> _meatHooks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ASearchable*> _searchables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _generators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AEscapeDoor*> _escapeDoors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AHatch*> _hatches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AReverseBearTrapRemover*> _reverseBearTrapRemovers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABaseTrap*> _baseTraps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<APallet*> _pallets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AWindow*> _windows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ALocker*> _lockers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABreakableBase*> _breakableWalls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATotem*> _totems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FBoxSphereBounds _mapBoxSphereBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FBoxSphereBounds _basementBoxSphereBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _camperEscapedThroughHatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ObsessionTarget, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _obsessionTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _cachedObsessionEscaped;

	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_NumberOfSurvivorsKilledOrSacrificed, Transient)
	int8 _numberOfSurvivorsKilledOrSacrificed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AInteractable*> _traps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UDBDDangerPredictionComponent*> _dangerPredictionObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GamePresetData, Transient, meta=(AllowPrivateAccess=true))
	FGamePresetData _gamePresetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _gameLevelLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OnGameLevelCreated, Transient, meta=(AllowPrivateAccess=true))
	bool _gameLevelCreated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _gameLevelEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _gameTimedOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EEndGameReason _gameEndedReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isLoadoutFrozen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UEndGameStateComponent* _endGameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UScourgeHookManagerComponent* _scourgeHookManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterCollection* _characterCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCollectableCollection* _collectableCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UServerTimeProviderComponent* _serverTimeProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInGameAssetPreloaderComponent* _inGameAssetPreloaderComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UOnScreenDebugComponent* _onScreenDebugComponent;

	UPROPERTY(EditAnywhere, Replicated, Transient)
	FDateTime _matchStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isServerDedicated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	int32 _maxSurvivorCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _serverBuildVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _serverContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _serverSessionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _serverRegion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FString _serverMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _introDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _leaveSpectateRequested;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void UpdateInGamePallets() const;

	UFUNCTION(BlueprintCallable)
	void UnregisterFromIntroCompleteAndLevelReadyToPlay(const UObject* inObject);

	UFUNCTION(BlueprintCallable)
	void SortOfferings();

	UFUNCTION(BlueprintCallable)
	void SetPlayersReadyToStart(bool playersReadyToStart);

	UFUNCTION(BlueprintCallable)
	void SetKillerIntroCompletedNormalized(float completedAmount);

	UFUNCTION(BlueprintCallable)
	void SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void SetDisplayMapName(bool display);

	UFUNCTION(BlueprintCallable)
	void SetBuiltLevelData(const FBuiltLevelData& builtLevelData);

	UFUNCTION(BlueprintCallable)
	void Server_UpdateGameRole();

	UFUNCTION(BlueprintCallable)
	void ResetGameLevelStatus();

	UFUNCTION(BlueprintCallable)
	void RemoveTrap(AInteractable* toRemove);

	UFUNCTION(BlueprintCallable)
	void RemoveDangerPredictionObject(UDBDDangerPredictionComponent* toRemove);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_UseNetAsyncLoading();

	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorLeft(int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_SessionId();

	UFUNCTION(BlueprintCallable)
	void OnRep_SecondsLeftInLobby(const int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_RequiredActivatedGeneratorCount(int32 oldRequiredActivatedGeneratorCount);

	UFUNCTION(BlueprintCallable)
	void OnRep_OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnRep_OnGameLevelCreated();

	UFUNCTION(BlueprintCallable)
	void OnRep_ObsessionTarget(ACamperPlayer* previousObsessionTarget);

	UFUNCTION()
	void OnRep_NumberOfSurvivorsKilledOrSacrificed(int8 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_LobbyId();

	UFUNCTION(BlueprintCallable)
	void OnRep_HatchOpened(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_GamePresetData();

	UFUNCTION(BlueprintCallable)
	void OnRep_GameLevelLoadingStarted(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_EscapeDoorActivated(bool oldValue);

	UFUNCTION(BlueprintCallable)
	void OnRep_BuildLevelData();

	UFUNCTION(BlueprintCallable)
	void OnRep_ActivatedGeneratorCount(int32 oldValue);

	UFUNCTION(BlueprintCallable)
	void OnPlayerGameStateChangedAddIfKilled(ADBDPlayerState* playerState, EGameState gameState);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UpdateCharacterFromGamePreset(ADBDPlayerState_Menu* playerState_Menu, const FGamePresetData& gamePresetData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetServerLeftGame(bool hasServerLeftGame);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetLostServerConnection(bool hasLostServerConnection);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetGameLevelLoaded(bool gameLevelLoaded);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetGameLevelEnded(EEndGameReason endGameReason);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetGameEnded(bool hasServerLeftGame);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetBuiltLevelData(const FBuiltLevelData& builtLevelData);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SendHVSPlusState(bool enabled);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SendEnsureToClients(const FString& ensure);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnGameStarted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_BroadcastOnLevelLoadingTimeOutClientEvent();

	UFUNCTION(BlueprintPure)
	bool IsPlayerDistributionReady() const;

	UFUNCTION(BlueprintPure)
	bool IsOnePlayerLeft() const;

	UFUNCTION(BlueprintCallable)
	bool IsOfferingReceived() const;

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAliveInLevel();

	UFUNCTION(BlueprintCallable)
	bool IsObsessionTargetAlive();

	UFUNCTION(BlueprintPure)
	bool IsLightingGenerated() const;

	UFUNCTION(BlueprintCallable)
	bool IsLevelSetupDone() const;

	UFUNCTION(BlueprintPure)
	bool IsLevelReadyToPlay() const;

	UFUNCTION(BlueprintPure)
	bool IsIntroCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsHatchVisible() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeRequirementCompleted() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorOpen() const;

	UFUNCTION(BlueprintPure)
	bool IsEscapeDoorActivated() const;

	UFUNCTION(BlueprintCallable)
	void IntroCompleted();

	UFUNCTION(BlueprintPure)
	TArray<AInteractable*> GetTraps() const;

	UFUNCTION(BlueprintPure)
	TArray<ATotem*> GetTotems() const;

	UFUNCTION(BlueprintPure)
	int32 GetSurvivorLeft() const;

	UFUNCTION(BlueprintPure)
	USpecialEventGameplaySpawnerComponent* GetSpecialEventGameplaySpawnerComponent() const;

	UFUNCTION(BlueprintCallable)
	TArray<FSelectedOffering> GetSelectedOfferings() const;

	UFUNCTION(BlueprintCallable)
	bool GetSelectedOffering(int32 index, FSelectedOffering& selectedOffering) const;

	UFUNCTION(BlueprintPure)
	int32 GetRequiredActivatedGeneratorCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingGeneratorsNeeded() const;

	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetPlayerStateByMirrorsID(const FString& id) const;

	UFUNCTION(BlueprintCallable)
	ADBDPlayerState* GetPlayerStateByIDString(const FString& id, bool isReplacementBot) const;

	UFUNCTION(BlueprintPure)
	bool GetPlayersReadyToStart() const;

	UFUNCTION(BlueprintPure)
	void GetPlayerRoleCounts(int32& survivorCount, int32& killerCount, int32& spectatorCount) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetObsessionTarget() const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfOtherActiveSurvivors(ADBDPlayer* exception) const;

	UFUNCTION(BlueprintPure)
	int32 GetNumberOfActiveSurvivors() const;

	UFUNCTION(BlueprintPure)
	FName GetMapThemeName() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLocalPlayerPawn() const;

	UFUNCTION(BlueprintPure)
	APawn* GetLocalPlayerBasePawn() const;

	UFUNCTION(BlueprintCallable)
	TSoftObjectPtr<UAkAudioBank> GetLevelThemeAudioSoundBankAssetPtr() const;

	UFUNCTION(BlueprintCallable)
	FBuiltLevelData GetLevelData() const;

	UFUNCTION(BlueprintPure)
	float GetKillerIntroCompletedNormalized() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetKiller() const;

	UFUNCTION(BlueprintPure)
	bool GetIsGameEnded() const;

	UFUNCTION(BlueprintPure)
	TArray<AWindow*> GetInGameWindows() const;

	UFUNCTION(BlueprintPure)
	TArray<ASearchable*> GetInGameSearchables() const;

	UFUNCTION(BlueprintPure)
	TArray<AReverseBearTrapRemover*> GetInGameReverseBearTrapRemovers() const;

	UFUNCTION(BlueprintPure)
	TArray<APallet*> GetInGamePallets() const;

	UFUNCTION(BlueprintPure)
	TArray<AMeatHook*> GetInGameMeatHooks() const;

	UFUNCTION(BlueprintPure)
	TArray<AHatch*> GetInGameHatches() const;

	UFUNCTION(BlueprintPure)
	TArray<AGenerator*> GetInGameGenerators() const;

	UFUNCTION(BlueprintPure)
	TArray<AEscapeDoor*> GetInGameEscapeDoors() const;

	UFUNCTION(BlueprintPure)
	TArray<ABaseTrap*> GetInGameBaseTraps() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoadingStarted() const;

	UFUNCTION(BlueprintPure)
	bool GetGameLevelLoaded() const;

	UFUNCTION(BlueprintPure)
	UEndGameStateComponent* GetEndGameStateComponent() const;

	UFUNCTION(BlueprintCallable)
	TArray<UDBDDangerPredictionComponent*> GetDangerPredictionObjects(const bool isObjectDynamic);

	UFUNCTION(BlueprintPure)
	UCollectableCollection* GetCollectableCollection() const;

	UFUNCTION(BlueprintPure)
	UCharacterCollection* GetCharacterCollection() const;

	UFUNCTION(BlueprintPure)
	TArray<UDBDDangerPredictionComponent*> GetAllDangerPredictionObjects() const;

	UFUNCTION(BlueprintCallable)
	void CallOnSlasherSet(FOnSlasherSetDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnLevelReadyToPlay(FOnLevelReadyToPlayDelegate callback);

	UFUNCTION(BlueprintCallable)
	void CallOnIntroComplete(FOnIntroCompleteDelegate callback);

	UFUNCTION(BlueprintCallable)
	void BroadcastOnSetBuildLevelData();

	UFUNCTION(BlueprintCallable)
	void Authority_SignalEscapeDoorActivated(bool newEscapeDoorActivated);

	UFUNCTION(BlueprintCallable)
	void Authority_SetSurvivorLeft(int32 survivorRemaining);

	UFUNCTION(BlueprintCallable)
	void Authority_SetObsessionTarget(ACamperPlayer* obsessionTarget);

	UFUNCTION(BlueprintCallable)
	void Authority_SetLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_SetHatchOpen(bool opened);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameStarted();

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameSelectedOffering(const TArray<FSelectedOffering>& offerings);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelLoaded();

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelEnded(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void Authority_SetGameLevelCreated();

	UFUNCTION(BlueprintCallable)
	void Authority_SetEscapeDoorOpened(bool opened);

	UFUNCTION(BlueprintCallable)
	void Authority_SetAllPlayerLoaded();

	UFUNCTION(BlueprintCallable)
	void Authority_EvaluateObsessionTarget(ADBDPlayer* potentialTarget);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EscapeThroughHatch();

	UFUNCTION(BlueprintCallable)
	void Authority_EnableObsession();

	UFUNCTION(BlueprintCallable)
	void Authority_DeactivateAI();

	UFUNCTION(BlueprintCallable)
	void AddTrap(AInteractable* toAdd);

	UFUNCTION(BlueprintCallable)
	void AddDangerPredictionObject(UDBDDangerPredictionComponent* toAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDGameState();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGameState) { return 0; }
