#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "CoreStoreSpecialPacksWidget.generated.h"

class UCoreStoreSpecialPackDetailsWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialPacksWidget : public UCoreStoreBaseSubTabsWidget, public IStoreSpecialPacksViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreSpecialPackDetailsWidget* DetailsWidget;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnTabsShowAnimationFinished();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnTabsHideAnimationFinished();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnDetailsShowAnimationFinished();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnDetailsHideAnimationFinished();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AnimateShowTabs();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AnimateShowDetails();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AnimateHideTabs();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AnimateHideDetails();

public:
	UCoreStoreSpecialPacksWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksWidget) { return 0; }
