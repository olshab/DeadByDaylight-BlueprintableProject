#pragma once

#include "CoreMinimal.h"
#include "EHelpType.h"
#include "GameManualViewInterface.h"
#include "EGameManualMenuState.h"
#include "CoreBaseUserWidget.h"
#include "OnSetOnboardingMenuSubtitleDelegate.h"
#include "OnResetOnboardingMenuSubtitleDelegate.h"
#include "CoreGameManualPanelWidget.generated.h"

class UDBDTextBlock;
class UPanelWidget;
class UCoreGameManualCategoryButton;
class UCoreTabContainerWidget;
class UDBDRichTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGameManualPanelWidget : public UCoreBaseUserWidget, public IGameManualViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameManualMenuState _currentSelectedManualMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHelpType _currentGameManualTopic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* CategoryPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreGameManualCategoryButton* GameCategoryButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreGameManualCategoryButton* SurvivorCategoryButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreGameManualCategoryButton* KillerCategoryButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* TopicsPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreTabContainerWidget* GameManualTopicsTabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* GameManualContentTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* GameManualContentSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* GameManualContentText;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnSetOnboardingMenuSubtitleDelegate _onSetOnboardingMenuSubtitleDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnResetOnboardingMenuSubtitleDelegate _onResetOnboardingMenuSubtitleDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void ToggleGameManualMenuState();

	UFUNCTION(BlueprintCallable)
	void ShowHelpTopics(EHelpType categoryType);

	UFUNCTION(BlueprintCallable)
	void SetGameManualMenuState(EGameManualMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void SetCurrentOnbardingMenuSubtitle();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ResetScrolls(bool resetTopicsScroll);

private:
	UFUNCTION(BlueprintCallable)
	void OnTopicsTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreGameManualPanelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGameManualPanelWidget) { return 0; }
