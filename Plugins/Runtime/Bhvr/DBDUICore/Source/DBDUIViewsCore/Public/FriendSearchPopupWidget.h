#pragma once

#include "CoreMinimal.h"
#include "FriendSearchPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "UObject/ScriptInterface.h"
#include "Templates/SubclassOf.h"
#include "FriendSearchPopupWidget.generated.h"

class UCoreInputSwitcherWidget;
class UCoreSearchBarWidget;
class UDBDScrollBox;
class ISearchBarViewInterface;
class UCoreButtonWidget;
class UFriendItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UFriendSearchPopupWidget : public UCoreGenericPopupWidget, public IFriendSearchPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* FriendSearchWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* FriendSearchScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UFriendItemWidget> FriendItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TMap<FString, UFriendItemWidget*> _friendsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TScriptInterface<ISearchBarViewInterface> _searchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSearchBarWidget* SearchBar;

protected:
	UFUNCTION(BlueprintCallable)
	void OnFriendClicked(UCoreButtonWidget* buttonTarget);

public:
	UFriendSearchPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupWidget) { return 0; }
