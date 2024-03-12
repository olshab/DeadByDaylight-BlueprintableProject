#include "ObjectiveTrackerTooltipWidget.h"
#include "EventObjectiveTrackerViewData.h"

void UObjectiveTrackerTooltipWidget::SetTooltipData(const FEventObjectiveTrackerViewData& viewData)
{

}

UObjectiveTrackerTooltipWidget::UObjectiveTrackerTooltipWidget()
{
	this->TitleTB = NULL;
	this->SubtitleTB = NULL;
	this->DescriptionRTB = NULL;
	this->RewardsHeaderTB = NULL;
	this->RewardLabelContainer = NULL;
	this->BannerIMG = NULL;
	this->LabelIMG = NULL;
	this->ObjectiveRewardLabelWidgetClass = NULL;
	this->MaxRewardLabels = 5;
	this->_objectiveRewardWidgetPool = TArray<UObjectiveRewardLabelWidget*>();
}
