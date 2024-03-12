#include "NotEnoughCurrencyModalViewData.h"

FNotEnoughCurrencyModalViewData::FNotEnoughCurrencyModalViewData()
{
	this->Content = FText::GetEmpty();
	this->ButtonText = FText::GetEmpty();
	this->CurrencyType = ECurrencyType::None;
	this->ShouldShowButton = false;
}
