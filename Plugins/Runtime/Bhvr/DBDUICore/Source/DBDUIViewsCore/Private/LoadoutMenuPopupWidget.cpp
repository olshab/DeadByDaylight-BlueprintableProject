#include "LoadoutMenuPopupWidget.h"
#include "TabWidgetData.h"
#include "Components/SlateWrapperTypes.h"

class UCoreButtonWidget;

void ULoadoutMenuPopupWidget::UpdateInventoryItemData()
{

}

void ULoadoutMenuPopupWidget::ShowMenuLoadoutPartsTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void ULoadoutMenuPopupWidget::OnPaginationSelected(const int32 currentPage, bool isUpdate)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuRightArrowClicked()
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPresetClicked(const int32 selectedPresetId)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPowerSlotClicked(UCoreButtonWidget* menuPowerWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuPerkSlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuOfferingSlotClicked(UCoreButtonWidget* menuOfferingWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuLeftArrowClicked()
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuItemSlotClicked(UCoreButtonWidget* menuItemWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuInventorySlotClicked(UCoreButtonWidget* menuPerkWidget)
{

}

void ULoadoutMenuPopupWidget::OnLoadoutMenuAddonSlotClicked(UCoreButtonWidget* menuAddonWidget)
{

}

void ULoadoutMenuPopupWidget::OnDropdownSelected(ESlateVisibility InVisibility)
{

}

void ULoadoutMenuPopupWidget::OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData)
{

}

void ULoadoutMenuPopupWidget::HideMenuLoadoutPartsTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

ULoadoutMenuPopupWidget::ULoadoutMenuPopupWidget()
{
	this->LoadoutMenuPowerItemRTB = NULL;
	this->LoadoutMenuAddonRTB = NULL;
	this->LoadoutMenuOfferingRTB = NULL;
	this->LoadoutMenuPerkRTB = NULL;
	this->BotRoleIndexText = NULL;
	this->LoadoutMenuInventoryRTB = NULL;
	this->LoadoutMenuSubtitleRTB = NULL;
	this->LoadoutMenuPresetRTB = NULL;
	this->DropDownListWidget = NULL;
	this->DropDownListTrigger = NULL;
	this->CoreMenuPower = NULL;
	this->CoreMenuItem = NULL;
	this->CoreAddon_1 = NULL;
	this->CoreAddon_2 = NULL;
	this->CoreOffering = NULL;
	this->CorePerk_1 = NULL;
	this->CorePerk_2 = NULL;
	this->CorePerk_3 = NULL;
	this->CorePerk_4 = NULL;
	this->PresetContainer = NULL;
	this->InventoryGridContainer = NULL;
	this->PaginationGridContainer = NULL;
	this->LeftArrow = NULL;
	this->RightArrow = NULL;
	this->PlusSignImage = NULL;
	this->LinkBarImage = NULL;
	this->AddonLinkBarImage = NULL;
	this->_loadoutPowerClass = NULL;
	this->_loadoutItemWidgetClass = NULL;
	this->_loadoutAddonClass = NULL;
	this->_loadoutOfferingClass = NULL;
	this->_loadoutPerkClass = NULL;
	this->_paginationWidgetClass = NULL;
	this->_inventoryPerRow = 3;
	this->_inventoryPerColumn = 5;
	this->_cellsPerRow = 5;
	this->_inventoryPerkExtraNudge = 0.000000;
	this->_inventoryOfferingExtraNudge = 0.000000;
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->_inventoryItemWidgetList = TArray<UCoreMenuLoadoutPartWidget*>();
	this->_perkSlotWidget = TArray<UCoreMenuPerkWidget*>();
	this->_addonSlotWidget = TArray<UCoreMenuAddonWidget*>();
	this->_menuLoadoutPartViewData = NULL;
	this->_loadoutSelectedSlot = ELoadoutSlot::SKIN;
	this->_numberOfPaginationItem = 0;
	this->_perkData = TArray<ULoadoutMenuPopupViewData*>();
	this->_addonLoadoutData = TArray<ULoadoutMenuPopupViewData*>();
	this->_inventoryViewData = TArray<ULoadoutMenuPopupViewData*>();
}
