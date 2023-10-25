#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "FriendSearchPopupScreen.generated.h"

UCLASS(Blueprintable)
class UFriendSearchPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnUnblockPlayer(const FString& friendKrakenID);

	UFUNCTION(BlueprintCallable)
	void OnInviteFriend(const FString& friendKrakenID, bool isOffNetwork);

	UFUNCTION(BlueprintCallable)
	void OnFriendSearchStart(const FString& searchText);

	UFUNCTION(BlueprintCallable)
	void OnAcceptFriendInvite(const FString& friendKrakenID);

public:
	UFriendSearchPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupScreen) { return 0; }
