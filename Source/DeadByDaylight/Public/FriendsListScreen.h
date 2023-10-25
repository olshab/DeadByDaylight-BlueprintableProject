#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "FriendsListScreen.generated.h"

UCLASS(Blueprintable)
class UFriendsListScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnViewProfile(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnUnblockPlayer(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnShowNameSelected(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnSendPartyInvite(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnSearchForFriend();

	UFUNCTION(BlueprintCallable)
	void OnRemoveFriend(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnPartyJoinRequest(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnHideNameSelected(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnDeclineFriendInvite(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnCancelFriendInvite(const FString& friendId);

	UFUNCTION(BlueprintCallable)
	void OnBlockPlayer(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnAcceptFriendInvite(const FString& friendId);

public:
	UFriendsListScreen();
};

FORCEINLINE uint32 GetTypeHash(const UFriendsListScreen) { return 0; }
