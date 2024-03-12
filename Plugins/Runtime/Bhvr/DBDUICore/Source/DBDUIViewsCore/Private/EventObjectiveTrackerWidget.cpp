#include "EventObjectiveTrackerWidget.h"
#include "EventObjectiveTrackerViewData.h"

class UEventObjectiveTrackerTarget;

void UEventObjectiveTrackerWidget::SetTargetPosition_Implementation(const UEventObjectiveTrackerTarget* target, float relativePosition)
{

}

void UEventObjectiveTrackerWidget::SetData_Implementation(const FEventObjectiveTrackerViewData& viewData)
{

}

UEventObjectiveTrackerWidget::UEventObjectiveTrackerWidget()
{
	this->NextTB = NULL;
	this->ProgressRTB = NULL;
	this->TargetsPanel = NULL;
	this->_eventObjectiveTrackerTargetClass = NULL;
	this->_maxTargets = 5;
	this->_targetPool = TArray<UEventObjectiveTrackerTarget*>();
}
