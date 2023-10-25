#pragma once

#include "CoreMinimal.h"
#include "StoreBaseSubTabsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreBaseSubTabsWidget.generated.h"

class UCoreTabContainerWidget;
class UWidgetSwitcher;
class UCoreSelectableButtonWidget;
class UWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UCoreStoreBaseSubTabsWidget : public UCoreBaseUserWidget, public IStoreBaseSubTabsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreTabContainerWidget* SubTabsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* TabContentSwitcher;

protected:
	UFUNCTION(BlueprintCallable)
	void OnSubTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UWidget* GetSubTabContentForTab(int32 subTabId);

public:
	UCoreStoreBaseSubTabsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreBaseSubTabsWidget) { return 0; }
