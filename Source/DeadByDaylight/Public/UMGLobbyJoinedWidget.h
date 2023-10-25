#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PlayerReadyStatusData.h"
#include "PlayerInfoData.h"
#include "InventorySlotData.h"
#include "UMGLobbyJoinedWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyJoinedWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LocalPlayerIsSlasher;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextLeaveLobby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextPlayerNotReadyYet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextWaitingPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextToBeReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* CommandButtonsContainer;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdatePlayersLatency(const TMap<int32, float>& playersLatency, bool isHost);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetWidgetsVisibility(const bool widgetsVisibilty);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetReadyStatus(const TArray<FPlayerReadyStatusData>& playersReadyStatusData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLocalPlayerInfo(const FPlayerInfoData& playerInfoData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLobbyTimer(int32 seconds);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLoadoutDataForLocalPlayer(const TArray<FInventorySlotData>& loadoutData, bool usingMatchRules, bool perkSlotsLockedByAdmin, bool isSlasher);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RemovePlayersInfo(int32 playerId);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleLeaveButtonClicked();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddPlayerInfo(int32 playerId, const FPlayerInfoData& playerInfoData, bool isPlayerReady, const TArray<FInventorySlotData>& loadoutData);

public:
	UUMGLobbyJoinedWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbyJoinedWidget) { return 0; }
