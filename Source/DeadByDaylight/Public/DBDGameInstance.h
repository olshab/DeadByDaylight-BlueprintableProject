#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Templates/SubclassOf.h"
#include "EOfferingEffectType.h"
#include "ForceSpawnTileData.h"
#include "EDisconnectErrors.h"
#include "PlayerDisconnectDelegate.h"
#include "ParadiseData.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDGameInstance.generated.h"

class UDBDDesignTunables;
class USpecialEventManager;
class UDataAsset;
class UDBDEasyAntiCheat;
class UContentScheduleManager;
class UShopManager;
class UOnlineTransactionServiceComponent;
class UControllerPairingManager;
class UPlayerProfileDAL;
class UWalletHandler;
class UOfferingEffectCollection;
class UFriendManager;
class UDBDAuthentication;
class UOnlineSystemHandler;
class UOfferingHandler;
class UDBDPlayerLevelManager;
class ABaseSky;
class UDateTimerUpdater;
class UChunkingManager;
class URegionFinder;
class AOfferingSequenceManager;
class AActor;
class UDBDSocialNotificationFactory;
class UCinematicManager;
class UGameEventTracker;
class UPlayerNameRegistration;
class UDBDKeyDisplayInfo;
class UDecalSpawnerCollection;
class UNewsContentManager;
class UAssetLibraryManager;
class ULocalPlayer;
class UCharacterProgressionManager;
class APlayerController;
class UDedicatedServerManager;
class UPrimitiveCollection;
class UBloodwebManager;
class UBonusPointEventsManager;
class ADBDPlayer;
class UDBDHud;
class UActorKnowledgeCollection;
class UFearMarketManager;
class UWorld;
class UPopupFactory;
class UObject;
class UDBDPersistentData;
class UDBDPartyFacade;
class UPlayerDataStorageFacade;
class URankManager;
class UDBDTimeTravelManager;
class UInteractionProficiency;
class UToastManager;
class UPenaltyTracker;
class UPopupSequencer;
class ULightingHelper;
class UConsentManager;
class UMapActorDB;
class UInventoryHandler;
class ULocalEventManager;
class USoftBanManager;
class UDBDTimeUtilities;
class ULightingInterpolator;
class ADBDPlayerState;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API UDBDGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UDBDDesignTunables> DesignTunableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDDesignTunables* DesignTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<URegionFinder> RegionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UShopManager> ShopManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AOfferingSequenceManager> OfferingSequenceManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UFriendManager> FriendManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataAsset* AchievementsDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UGameEventTracker* GameEventTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDBDKeyDisplayInfo* KeyDisplayInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LeaveGameRequested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UPlayerProfileDAL* PlayerProfileDAL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 GenerationSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PaperTileAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 GenerationPlayerCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PremadeMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FForceSpawnTileData> ForceSpawnTileData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AOfferingSequenceManager* OfferingSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FParadiseData> ParadiseData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool PlayerProfileLoadFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UNewsContentManager* NewsContentManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UContentScheduleManager* ContentScheduleManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCharacterProgressionManager* CharacterProgressionManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AuthOrEACErrorAdditionalInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasServerLeftMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasWrittenGameEndStats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UFearMarketManager* FearMarketManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UShopManager* ShopManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UFriendManager* FriendManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UWalletHandler* WalletHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName TutorialRequesterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UControllerPairingManager* ControllerPairingManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UChunkingManager* ChunkingManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPlayerDisconnectDelegate OnPlayerDisconnect;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAssetLibraryManager* _assetLibraryManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UBloodwebManager> _bloodwebManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UOnlineTransactionServiceComponent* _onlineTransactionService;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDPersistentData* _persistentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPlayerDataStorageFacade* _playerDataFacade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URankManager* _rankManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDPlayerLevelManager* _playerLevelManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPlayerNameRegistration* _playerNameRegistration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USpecialEventManager* _specialEventManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBonusPointEventsManager* _bonusPointEventsManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDTimeTravelManager* _timeTravelManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UToastManager* _toastManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDSocialNotificationFactory* _socialNotificationFactory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDPartyFacade* _partyFacade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPenaltyTracker* _penaltyTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULightingHelper* _ligthingHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOfferingHandler* _offeringHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UActorKnowledgeCollection*> _actorKnowledgeCollections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMapActorDB* _mapActorDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UInteractionProficiency*> _interactionProficiencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDHud* _theHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebManager* _bloodwebManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPopupSequencer* _popupSequencer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPopupFactory* _popupFactory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDAuthentication* _auth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDEasyAntiCheat* _eac;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<UObject>> _execObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _networkFailureDetected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _networkConnectionMonitoringOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _achievementStatsUploadEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isDisconnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isGamepadReconnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isProfileOffline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAppSuspended;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAppResumed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInvitationRejected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isAdditionalContentInstalled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isCloudInventoryInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOfferingEffectCollection* _resultOfferingAndPerkEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCinematicManager* _cinematicManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USoftBanManager* _softBanManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UConsentManager* _consentManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOnlineSystemHandler* _onlineSystemHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URegionFinder* _regionFinder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalSpawnerCollection* _decalSpawnerCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPrimitiveCollection* _characterClippingPrimitiveCollection;

	UPROPERTY(EditAnywhere, Transient)
	uint32 LastProviderErrorCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EDisconnectErrors _disconnectError;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDateTimerUpdater* _dateTimerUpdater;

public:
	UFUNCTION(BlueprintCallable)
	void StartOfferingSequence();

	UFUNCTION(BlueprintCallable)
	void SimulateOfferingSequence(const TArray<FName>& offerings, bool playSequence);

	UFUNCTION(BlueprintCallable)
	void RemoveActorKnowledgeCollection(UActorKnowledgeCollection* collection);

	UFUNCTION(BlueprintCallable)
	void OnTimeTravelComplete(bool success, const FString& date) const;

	UFUNCTION(BlueprintPure)
	bool IsActorKnown(const ADBDPlayer* knowledgePossessor, AActor* possiblyKnownActor) const;

	UFUNCTION(BlueprintPure)
	bool HasOfferingOfType(EOfferingEffectType type, int32 playerId, FName tag) const;

	UFUNCTION(BlueprintPure)
	bool HasOfferingByType(EOfferingEffectType type) const;

	UFUNCTION(BlueprintCallable, Exec)
	void GotoSplashScreen(bool showDefaultDialogueOnSplashScreen);

	UFUNCTION(BlueprintCallable)
	UDBDTimeUtilities* GetTimeUtils() const;

	UFUNCTION(BlueprintPure)
	USpecialEventManager* GetSpecialEventManager() const;

	UFUNCTION(BlueprintPure)
	USoftBanManager* GetSoftBanManager() const;

	UFUNCTION(BlueprintPure)
	URankManager* GetRankManager() const;

	UFUNCTION(BlueprintPure)
	UPlayerNameRegistration* GetPlayerNameRegistration() const;

	UFUNCTION(BlueprintPure)
	UDBDPlayerLevelManager* GetPlayerLevelManager() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaxSurvivorCount() const;

	UFUNCTION(BlueprintPure)
	UMapActorDB* GetMapActorDB() const;

	UFUNCTION(BlueprintPure)
	APlayerController* GetLocalPlayerController() const;

	UFUNCTION(BlueprintPure)
	ULocalPlayer* GetLocalPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLocallyControlledCharacter() const;

	UFUNCTION(BlueprintCallable)
	ULocalEventManager* GetLocalEventManager() const;

	UFUNCTION(BlueprintPure)
	ULightingInterpolator* GetLightInterpolator();

	UFUNCTION(BlueprintPure)
	ULightingHelper* GetLightingHelper();

	UFUNCTION(BlueprintCallable)
	ABaseSky* GetLevelLighting();

	UFUNCTION(BlueprintCallable)
	UInventoryHandler* GetInventoryHandler() const;

	UFUNCTION(BlueprintCallable)
	UDedicatedServerManager* GetDedicatedServerManager() const;

	UFUNCTION(BlueprintPure)
	UDecalSpawnerCollection* GetDecalSpawnerCollection() const;

	UFUNCTION(BlueprintPure)
	int32 GetDeadOrDisconnectedCampersCount(ADBDPlayerState* exception) const;

	UFUNCTION(BlueprintPure)
	UConsentManager* GetConsentManager() const;

	UFUNCTION(BlueprintPure)
	UCinematicManager* GetCinematicManager() const;

	UFUNCTION(BlueprintPure)
	FName GetCharacterDefaultItem(int32 inCharacterIndex);

	UFUNCTION(BlueprintPure)
	UPrimitiveCollection* GetCharacterClippingPrimitiveCollection() const;

	UFUNCTION(BlueprintPure)
	UBonusPointEventsManager* GetBonusPointEventsManager() const;

	UFUNCTION(BlueprintCallable)
	static void ForceCloseGame();

	UFUNCTION(BlueprintCallable)
	void EndLoadingScreen(UWorld* loadedWorld);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_UpdateSteamInventory();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ToggleLightingLoaded();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestTickedDiceRoll(float BaseProbability, float ticks, float MultiplicativeModifier, float AdditiveModifier);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestSaveFile(const FString& name);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestRegion();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TestDiceRoll(float BaseProbability, float MultiplicativeModifier, float AdditiveModifier);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetStatsUploadEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetFearMarketDate(const FString& dateString);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetSaveData();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetCurrentAchievementStats(bool andUpload, bool andUpdateData);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ResetCurrentAchievementStat(FName statName, bool andUpload);

	UFUNCTION(BlueprintPure=false, BlueprintCallable, Exec)
	void DBD_PrintAudioConfig() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_PIXEndCapture();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_PIXBeginCapture();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_GetRegion();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceSave();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ForceLoad();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DumpSessions();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DisplayCurrentAchievementStat(FName statName);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DestroySteamInventory();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DeleteLocalSaveFile();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_CheckForNewContent(const FString& debugGameVersion, bool forceDisplay);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ChangeSteamOverlayPosition(int32 position, int32 verticalOffset, int32 horizontalOffset);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ApplyNoMist();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ApplyMist(const float fogModifier);

	UFUNCTION(BlueprintCallable)
	void BeginLoadingScreen(const FString& MapName);

	UFUNCTION(BlueprintCallable)
	void Authority_SimulatePerks(TArray<FName> perks, int32 level);

	UFUNCTION(BlueprintCallable)
	void AddActorKnowledgeCollection(UActorKnowledgeCollection* collection);

public:
	UDBDGameInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameInstance) { return 0; }
