#include "ProfileMenuCustomizationWidget.h"
#include "EItemSorting.h"

void UProfileMenuCustomizationWidget::OnEquipButtonClicked()
{

}

void UProfileMenuCustomizationWidget::OnCustomizationSortingChanged(const EItemSorting itemSorting)
{

}

void UProfileMenuCustomizationWidget::OnCustomizationGridItemClicked(const int32 selectedIndex)
{

}

UProfileMenuCustomizationWidget::UProfileMenuCustomizationWidget()
{
	this->SortButton = NULL;
	this->CustomizationGrid = NULL;
	this->PreviewArea = NULL;
	this->EquipInputSwitcher = NULL;
	this->_noBannerSelectedText = FText::GetEmpty();
	this->_noBadgeSelectedText = FText::GetEmpty();
	this->_customizationCategory = ECustomizationCategory::None;
}
