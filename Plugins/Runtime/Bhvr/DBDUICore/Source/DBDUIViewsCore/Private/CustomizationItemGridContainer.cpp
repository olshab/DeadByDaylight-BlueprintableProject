#include "CustomizationItemGridContainer.h"
#include "CustomizationRewardViewData.h"

class UCoreKeyListenerInputPromptWidget;
class UCoreSelectableButtonWidget;

void UCustomizationItemGridContainer::SetSmallTemplate(const bool setSmallTemplate)
{

}

void UCustomizationItemGridContainer::SetSelectedItem(const int32 selectedIndex)
{

}

void UCustomizationItemGridContainer::SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt)
{

}

void UCustomizationItemGridContainer::SetData(const TArray<FCustomizationRewardViewData>& customizationRewardsData, const int32 selectedIndex)
{

}

void UCustomizationItemGridContainer::OnItemClicked(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCustomizationItemGridContainer::HideMilestonePointIcons() const
{

}

void UCustomizationItemGridContainer::ClearGrid() const
{

}

UCustomizationItemGridContainer::UCustomizationItemGridContainer()
{
	this->_customizationRewardWidgetClass = NULL;
	this->_setSmallTemplate = false;
	this->_columnCountInGrid = 5;
	this->_customizationTileScale = 1.000000;
	this->_rowCountToShowScrollBar = 3;
	this->GridContainer = NULL;
	this->ScrollBox = NULL;
	this->_scrollLabelText = FText::GetEmpty();
}
