#pragma once

#include "CoreMinimal.h"
#include "FriendSearchPopupViewInterface.h"
#include "CoreGenericTextInputPopupWidget.h"
#include "Templates/SubclassOf.h"
#include "FriendSearchPopupWidget.generated.h"

class UDBDScrollBox;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;
class UFriendItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UFriendSearchPopupWidget : public UCoreGenericTextInputPopupWidget, public IFriendSearchPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* FriendSearchWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDScrollBox* FriendSearchScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UFriendItemWidget> FriendItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TMap<FString, UFriendItemWidget*> _friendsMap;

protected:
	UFUNCTION(BlueprintCallable)
	void OnFriendClicked(UCoreButtonWidget* buttonTarget);

public:
	UFriendSearchPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupWidget) { return 0; }
