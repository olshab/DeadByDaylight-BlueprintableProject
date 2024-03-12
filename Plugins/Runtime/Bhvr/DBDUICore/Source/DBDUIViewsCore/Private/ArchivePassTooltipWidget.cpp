#include "ArchivePassTooltipWidget.h"
#include "ArchivePassTooltipViewData.h"

void UArchivePassTooltipWidget::SetTooltipData_Implementation(const FArchivePassTooltipViewData& data)
{

}

UArchivePassTooltipWidget::UArchivePassTooltipWidget()
{
	this->TitleTB = NULL;
	this->SubTitleTB = NULL;
	this->DescriptionRTB = NULL;
	this->PriceTag = NULL;
}
