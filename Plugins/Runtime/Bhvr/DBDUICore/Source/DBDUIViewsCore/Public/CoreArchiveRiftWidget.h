#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftViewInterface.h"
#include "ETooltipVerticalAlignment.h"
#include "CoreTabContentWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "ArchiveRiftOnRewardCurrencyClicked.h"
#include "ArchiveRiftOnRewardItemClicked.h"
#include "ArchivesRiftGenericViewData.h"
#include "ArchiveRiftTierRewardsViewData.h"
#include "ArchiveRiftOnPurchasePremiumPassClicked.h"
#include "ArchiveRiftOnPurchaseTierClicked.h"
#include "ArchiveRiftOnOutfitClicked.h"
#include "ArchiveRiftOnBonusTierTooltipShown.h"
#include "EEasingType.h"
#include "Templates/SubclassOf.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "ETierType.h"
#include "CoreArchiveRiftWidget.generated.h"

class UCoreImagePreviewAreaWidget;
class UHorizontalBox;
class UCoreToggleButtonWidget;
class UCoreArchiveRiftTierItem;
class UDBDTextBlock;
class UCoreInputSwitcherWidget;
class UDBDRichTextBlock;
class UUITweenInstance;
class UCoreSelectableButtonWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveRiftWidget : public UCoreTabContentWidget, public IArchiveRiftViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnRewardItemClicked _rewardItemClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnRewardCurrencyClicked _rewardCurrencyClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnPurchasePremiumPassClicked _purchasePremiumPassClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnPurchaseTierClicked _purchaseTierClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnOutfitClicked _outfitClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftOnBonusTierTooltipShown _bonusTierShownDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FArchivesRiftGenericViewData _genericData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FArchiveRiftTierRewardsViewData> _riftTiersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 _currentPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxTierItemsPerPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animationItemDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animationPremiumTrackDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pageSwitchFadeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType _pageSwitchFadeTweenEasing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreArchiveRiftTierItem> _archiveRiftTierItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _freePurchaseButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _freePurchaseDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _premiumPurchaseButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _premiumPurchaseDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _maxTierText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText _currentProgressInfoText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCurrencyProgressionTooltipViewData _riftFragmentTooltipViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreToggleButtonWidget* OutfitButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PurchaseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* RewardGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* TierInfoDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TierInfoTopTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TierInfoBottomTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* FreeTrackLabelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PremiumTrackLabelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PaginationTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PaginationPreviousButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* PaginationNextButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreImagePreviewAreaWidget* ImagePreviewArea;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreArchiveRiftTierItem*> _tierItemPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _contentVisbilityTween;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _pageSwitchVisbilityTween;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCoreSelectableButtonWidget* _currentSelectedReward;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualData(const FArchivesRiftGenericViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTierVisuals(ETierType tierType);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPaginationVisuals(const bool showBonusTierHighlight, const FText& bonusTierTooltipText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPremiumTrackUnlockAnimation();

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardItemClicked(int32 tier, UCoreButtonWidget* button, bool isPremium, int32 index);

	UFUNCTION(BlueprintCallable)
	void OnRewardAnimationCompleted();

	UFUNCTION(BlueprintCallable)
	void OnPreviousButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnOutfitButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnOutfitButtonHovered(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnOutfitButtonClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnNextButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCurrentPageAnimationCompleted();

	UFUNCTION(BlueprintCallable)
	void DisplayPage(UUITweenInstance* tween);

public:
	UCoreArchiveRiftWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveRiftWidget) { return 0; }
