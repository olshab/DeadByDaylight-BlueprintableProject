#pragma once

#include "CoreMinimal.h"
#include "LoadoutMenuViewInterface.h"
#include "Blueprint/UserWidget.h"
#include "OnLoadoutMenuInventorySlotClick.h"
#include "Components/SlateWrapperTypes.h"
#include "OnPaginationAnimationCompleted.h"
#include "OnLoadoutMenuSlotClick.h"
#include "LoadoutMenuSlotIsSelected.h"
#include "OnLoadoutMenuPresetSlotClick.h"
#include "OnSelectedCharacterChanged.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "ETooltipHorizontalAlignment.h"
#include "ETooltipVerticalAlignment.h"
#include "TabWidgetData.h"
#include "ELoadoutSlot.h"
#include "EItemAvailability.h"
#include "LoadoutMenuWidget.generated.h"

class UCoreMenuItemWidget;
class UCoreMenuPowerWidget;
class UDBDRichTextBlock;
class UCoreMenuOfferingWidget;
class UDBDTextBlock;
class UDBDDropDownListButton;
class UDBDDropDownListWidget;
class UCoreMenuAddonWidget;
class UCoreMenuPerkWidget;
class UCorePresetWidgetContainer;
class UGridPanel;
class UCorePaginationContainerWidget;
class UCoreInputSwitcherWidget;
class UMenuLoadoutPartViewData;
class UDBDImage;
class UCoreMenuLoadoutPartWidget;
class URichTextBlock;
class ULoadoutMenuViewData;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API ULoadoutMenuWidget : public UUserWidget, public ILoadoutMenuViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPowerItemRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuAddonRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuOfferingRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPerkRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* BotRoleIndexText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuInventoryRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuSubtitleRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* LoadoutMenuPresetRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListWidget* DropDownListWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDDropDownListButton* DropDownListTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPowerWidget* CoreMenuPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuItemWidget* CoreMenuItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuAddonWidget* CoreAddon_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuOfferingWidget* CoreOffering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePresetWidgetContainer* PresetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* InventoryGridContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePaginationContainerWidget* PaginationGridContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* PlusSignImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* LinkBarImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* AddonLinkBarImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnPaginationAnimationCompleted _onPaginationAnimationCompletedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnLoadoutMenuSlotClick _onLoadoutMenuSlotClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLoadoutMenuSlotIsSelected _onLoadoutMenuSlotSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnLoadoutMenuInventorySlotClick _onLoadoutMenuInventorySlotClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnLoadoutMenuPresetSlotClick _onLoadoutMenuPresetSlotClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnSelectedCharacterChanged _onSelectedCharacterChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreMenuPowerWidget> _loadoutPowerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreMenuItemWidget> _loadoutItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreMenuAddonWidget> _loadoutAddonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreMenuOfferingWidget> _loadoutOfferingClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreMenuPerkWidget> _loadoutPerkClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCorePaginationContainerWidget> _paginationWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _inventoryPerColumn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _cellsPerRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryItemPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryPerkPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _inventoryOfferingPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inventoryPerkExtraNudge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _inventoryOfferingExtraNudge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreMenuLoadoutPartWidget*> _inventoryItemWidgetList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreMenuPerkWidget*> _perkSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreMenuAddonWidget*> _addonSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMenuLoadoutPartViewData* _menuLoadoutPartViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ELoadoutSlot _loadoutSelectedSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _numberOfPaginationItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuViewData*> _perkData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuViewData*> _addonLoadoutData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadoutMenuViewData*> _inventoryViewData;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RegressionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* AlternativeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	URichTextBlock* TitleText;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateInventoryItemData();

	UFUNCTION(BlueprintCallable)
	void ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetInventoryItemEnabled(UCoreMenuLoadoutPartWidget* widget, const EItemAvailability availability);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPaginationOutAnimation(bool isNextPage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayPaginationInAnimation();

private:
	UFUNCTION(BlueprintCallable)
	void OnPaginationSelected(const int32 currentPage, bool isUpdate);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuRightArrowClicked();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPresetClicked(const int32 selectedPresetId);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuLeftArrowClicked();

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget);

	UFUNCTION(BlueprintCallable)
	void OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget);

	UFUNCTION(BlueprintCallable)
	void OnDropdownSelected(ESlateVisibility InVisibility);

	UFUNCTION(BlueprintCallable)
	void OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnAcceptAction();

private:
	UFUNCTION(BlueprintCallable)
	void HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	ULoadoutMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutMenuWidget) { return 0; }
