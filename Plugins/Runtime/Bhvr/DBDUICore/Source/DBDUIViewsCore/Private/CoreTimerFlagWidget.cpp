#include "CoreTimerFlagWidget.h"
#include "EFlagSize.h"
#include "TimerFlagViewData.h"

void UCoreTimerFlagWidget::UpdateTimer_Implementation(const FString& newTimer)
{

}

void UCoreTimerFlagWidget::UpdateFlagSize_Implementation(EFlagSize flagSize)
{

}

void UCoreTimerFlagWidget::SetData_Implementation(const FTimerFlagViewData& data)
{

}

void UCoreTimerFlagWidget::OnTimerTick(int32 remainingTime)
{

}

void UCoreTimerFlagWidget::NativeDestruct()
{

}

bool UCoreTimerFlagWidget::IsDataSet() const
{
	return false;
}

FTimerFlagViewData UCoreTimerFlagWidget::GetCachedData()
{
	return FTimerFlagViewData{};
}

UCoreTimerFlagWidget::UCoreTimerFlagWidget()
{
	this->TimerTB = NULL;
}
