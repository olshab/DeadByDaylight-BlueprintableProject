#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "FriendWidgetList.h"
#include "ActionOnFriend.h"
#include "EActionOnFriendType.h"
#include "UMGAtlantaFriendListScreen.generated.h"

class UHorizontalBox;
class UUMGBaseButtonWidget;
class UUMGBaseFriendListContextualMenuWidget;
class UUMGFriendListTabWidget;
class UUMGBaseFriendListElement;
class UUMGSuggestionsListTabWidget;
class UWidgetSwitcher;
class UTextBlock;
class UUMGFriendSearchBarWidget;
class UUMGRequestsListTabWidget;
class UUMGFriendTabButtonWidget;
class UExpandableArea;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaFriendListScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* ListSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* SearchResultSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseFriendListElement* NonFriendSearchResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseFriendListElement* RequestReceivedSearchResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseFriendListElement* RequestSentSearchResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseFriendListElement* FriendSearchResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* SearchFailureText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* CloseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFriendSearchBarWidget* SearchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* ButtonTabContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFriendListTabWidget* FriendListTabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSuggestionsListTabWidget* SuggestionListTabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRequestsListTabWidget* RequestListTabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFriendTabButtonWidget* FriendsTabButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFriendTabButtonWidget* SuggestionsTabButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFriendTabButtonWidget* RequestsTabButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUMGBaseFriendListContextualMenuWidget* CurrentContextualMenuWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> RequestSentWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendRequestReceivedWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListElement> FriendPartyInviteWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuInvite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuConfirmDeclineAction;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FString, FFriendWidgetList> _existingFriendListWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TMap<FString, UUMGBaseFriendListElement*> _existingFriendInvitePartyWidget;

private:
	UFUNCTION(BlueprintCallable)
	void VerifyReceivedFriendRequestFocus(UExpandableArea* expandableArea, bool bIsExpanded);

	UFUNCTION(BlueprintCallable)
	void OnFinishedOutAnimation();

	UFUNCTION(BlueprintCallable)
	void HandleTabButtonClicked(uint8 tabIndex);

	UFUNCTION(BlueprintCallable)
	void HandleSearchInputChanged(const FText& inputText);

	UFUNCTION(BlueprintCallable)
	void HandleSearchButtonClicked();

	UFUNCTION(BlueprintCallable)
	void HandleOnActionOnFriend(const FActionOnFriend& actionOnFriend);

	UFUNCTION(BlueprintCallable)
	void HandleContextualMenuAction(EActionOnFriendType action);

	UFUNCTION(BlueprintCallable)
	void HandleCloseButtonClicked();

public:
	UUMGAtlantaFriendListScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaFriendListScreen) { return 0; }
