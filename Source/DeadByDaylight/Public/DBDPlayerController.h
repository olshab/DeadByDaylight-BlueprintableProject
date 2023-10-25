#pragma once

#include "CoreMinimal.h"
#include "DBDPlayerControllerBase.h"
#include "OnPawnLeavingGameDelegate.h"
#include "OnLocallyObservedChangedDelegate.h"
#include "EPlayerRole.h"
#include "PlayerFinishStats.h"
#include "DBDPlayerController.generated.h"

class APawn;
class UDBDBaseInputHandler;
class ADBDPlayer;
class ADBDPlayerState;
class ANetworkFenceActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDPlayerController : public ADBDPlayerControllerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPawnLeavingGameDelegate OnPawnLeavingGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLocallyObservedChangedDelegate OnLocallyObservedChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Fence, Transient, meta=(AllowPrivateAccess=true))
	ANetworkFenceActor* _theFence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDBaseInputHandler* _inputHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APawn* _aiPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPlayerRole _controllerGameRole;

public:
	UFUNCTION(BlueprintCallable)
	void SetShouldMoveInputReplicateToServer(bool shouldReplicate);

	UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
	void ServerViewPlayer(const FString& playerName);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetSpectatorMode(bool on);

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetReadyToTravel();

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetHasMoveInputThisFrame(bool hasMoveInputThisFrame);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestEndGame();

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_LeaveGame(bool joiningLobby);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_DebugSend(const FString& data);

	UFUNCTION(BlueprintCallable, Server, Unreliable)
	void Server_ClientTimeSinceLastLoadingProgress(float lastProgression);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ActivateAIAll(bool activate, int32 playerRank, int8 playerRole);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_ActivateAI(bool activate, int32 playerRank);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Fence();

public:
	UFUNCTION(BlueprintPure)
	bool MobileJoystickInput_Pressed(int32 joystickIndex) const;

	UFUNCTION(BlueprintPure)
	bool IsSpectating() const;

	UFUNCTION(BlueprintCallable)
	void ImplementRunLockMechanic();

	UFUNCTION(BlueprintPure)
	ADBDPlayerState* GetSpectatedPlayerState() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetSpectatedPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetControlledPlayer() const;

	UFUNCTION(BlueprintPure)
	APawn* GetAIPawn() const;

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SpectateAI(APawn* aiPawn);

public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetSpectatorMode(bool on);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_SetPlayerFinishStats(const FPlayerFinishStats& stats);

public:
	UFUNCTION(BlueprintCallable)
	void ActivateAI(bool activate, int32 playerRank);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ADBDPlayerController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerController) { return 0; }
