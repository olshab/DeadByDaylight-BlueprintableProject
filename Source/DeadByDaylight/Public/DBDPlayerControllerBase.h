#pragma once

#include "CoreMinimal.h"
#include "PlayerSavedProfileDataShared.h"
#include "GameFramework/PlayerController.h"
#include "OnPlayerStateChanged.h"
#include "PlayerFinishedPlayingData.h"
#include "PlayerLoadoutData.h"
#include "DBDPlayerControllerBase.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPlayerStateChanged OnPlayerStateChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _mainCharacter;

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_UpdateReplicatedPips(int32 pipsToAdd);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetPlayerCard(const FString& badgeId, const FString& bannerId);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetConsecutiveMatchStreak(int32 consecutiveMatch);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SendMessage(const FString& message);

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendClientAuthentication(const FString& authClientTicket, uint64 steamID, uint32 ticketLength);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_ReceivePlayerProfile(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_EACMessageFromClient(const TArray<uint8>& message);

	UFUNCTION(BlueprintCallable, Exec)
	void Server(const FString& commandLine);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_UpdateLocalStats();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetCurrentCharacterPrestigeDatesPast();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetCurrentCharacterPrestigeDatesNow();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SetCurrentCharacterPrestigeDatesFuture();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FireTestScore(int32 category, float value);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FillScoreCategory(int32 category);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_FillAllScoreCategories();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_DebugSendChatMessage(const FString& msg);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BuildFromTile(int32 matrixX, int32 matrixY, int32 rotation, const FString& name);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BuildFromSeed(int32 seed);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BuildFromPremadeMap(const FString& map);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BuildFromPlayerCount(int32 count);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_BuildFromMap(const FString& map);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SendWarning(bool penaltyStarts, float seconds);

private:
	UFUNCTION(Client, Reliable, WithValidation)
	void Client_SendServerAuthentication(const FString& authServerTicket, uint64 steamID, uint32 ticketLength);

public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SendLogs(const TArray<FString>& ensures);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_RequestPlayerProfile();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_GameEnded();

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_FinishedPlaying(FPlayerFinishedPlayingData finishedPlayingData);

public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_EACResetConnection();

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_EACMessageFromServer(const TArray<uint8>& message);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_EACConnect();

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void CallConsoleCmdOnServer_Server(const FString& commandLine);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerControllerBase();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerControllerBase) { return 0; }
