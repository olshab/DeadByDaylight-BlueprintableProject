#pragma once

#include "CoreMinimal.h"
#include "EventCollectionViewInterface.h"
#include "CoreTabContentWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "OnCustomizationItemClickedDelegate.h"
#include "EventEntryRewardsTabWidget.generated.h"

class UEventEntryRewardsDisplayWidget;
class UCoreKeyListenerInputPromptWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEventEntryRewardsTabWidget : public UCoreTabContentWidget, public IEventCollectionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventEntryPopupSkinUIData _skinData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UEventEntryRewardsDisplayWidget* EventEntryRewardsDisplayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCustomizationItemClickedDelegate _onRewardGridItemClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCustomizationItemClickedDelegate _onPreviewAreaItemClicked;

public:
	UFUNCTION(BlueprintCallable)
	void SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnPreviewAreaItemClicked(const int32 selectedIndex);

public:
	UEventEntryRewardsTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryRewardsTabWidget) { return 0; }
