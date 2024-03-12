#include "CustomizationTooltipWidget.h"

class UCustomizationRewardOutfitPartsViewData;

void UCustomizationTooltipWidget::SetStatusText(const bool isEquipped, const bool isOwned, const bool isLocked)
{

}

void UCustomizationTooltipWidget::SetOutfitParts_Implementation(const UCustomizationRewardOutfitPartsViewData* outfitPartsViewData)
{

}

void UCustomizationTooltipWidget::AppendToDescriptionText(const FText& appendedText)
{

}

UCustomizationTooltipWidget::UCustomizationTooltipWidget()
{
	this->_outfitPartWidgetClass = NULL;
	this->_preConstructedOutfitPartsCount = 3;
	this->ToolTipStatusTB = NULL;
	this->ToolTipDescriptionRTB = NULL;
	this->OutfitPartsContainer = NULL;
	this->OutfitPartsLabel = NULL;
	this->_outfitPartsList = NULL;
}
