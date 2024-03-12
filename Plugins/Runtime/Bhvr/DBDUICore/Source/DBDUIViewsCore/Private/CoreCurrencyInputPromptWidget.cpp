#include "CoreCurrencyInputPromptWidget.h"
#include "PriceTagViewData.h"
#include "ECurrencyType.h"

void UCoreCurrencyInputPromptWidget::SetCurrencyData(const FPriceTagViewData& currencyData)
{

}

void UCoreCurrencyInputPromptWidget::SetBackgroundVisible(const bool showBackground) const
{

}

ECurrencyType UCoreCurrencyInputPromptWidget::GetCurrencyType() const
{
	return ECurrencyType::None;
}

UCoreCurrencyInputPromptWidget::UCoreCurrencyInputPromptWidget()
{
	this->PriceTag = NULL;
	this->_chargeToUnlockCurve = NULL;
	this->_chargeToUnlockDuration = 0.000000;
}
