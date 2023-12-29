#pragma once

#include "CoreMinimal.h"
#include "StoreMenuViewInterface.h"
#include "StoreRedeemCodeButtonDelegate.h"
#include "CoreBaseUserWidget.h"
#include "StoreMenuBackActionDelegate.h"
#include "StoreGetAuricCellsButtonDelegate.h"
#include "StoreMenuTabSelectedDelegate.h"
#include "CoreStoreMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreKeyListenerButtonWidget;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreMenuWidget : public UCoreBaseUserWidget, public IStoreMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* StoreMenuTabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreKeyListenerButtonWidget* RedeemCodeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreKeyListenerButtonWidget* GetAuricCellsButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreMenuTabSelectedDelegate _menuTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreMenuBackActionDelegate _backActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreRedeemCodeButtonDelegate _redeemCodeButtonDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreGetAuricCellsButtonDelegate _getAuricCellsButtonDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRedeemCodeButtonClicked(UCoreButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnGetAuricCellsClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

public:
	UCoreStoreMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreMenuWidget) { return 0; }
