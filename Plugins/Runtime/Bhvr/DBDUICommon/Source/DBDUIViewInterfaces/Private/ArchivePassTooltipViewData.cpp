#include "ArchivePassTooltipViewData.h"

FArchivePassTooltipViewData::FArchivePassTooltipViewData()
{
	this->Title = FText::GetEmpty();
	this->Subtitle = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Price = FPriceTagViewData{};
}
