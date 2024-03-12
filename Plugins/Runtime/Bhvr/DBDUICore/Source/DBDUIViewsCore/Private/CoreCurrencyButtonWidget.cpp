#include "CoreCurrencyButtonWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"

class UCoreButtonWidget;

void UCoreCurrencyButtonWidget::SetCurrencyData_Implementation(const FPriceTagViewData& currencyData)
{

}

void UCoreCurrencyButtonWidget::SetBackgroundVisible(const bool showBackground) const
{

}

void UCoreCurrencyButtonWidget::OnCurrencyButtonPressed(UCoreButtonWidget* button)
{

}

ECurrencyType UCoreCurrencyButtonWidget::GetCurrencyType() const
{
	return ECurrencyType::None;
}

UCoreCurrencyButtonWidget::UCoreCurrencyButtonWidget()
{
	this->PriceTag = NULL;
	this->_chargeToUnlockCurve = NULL;
	this->_chargeToUnlockDuration = 0.000000;
}
