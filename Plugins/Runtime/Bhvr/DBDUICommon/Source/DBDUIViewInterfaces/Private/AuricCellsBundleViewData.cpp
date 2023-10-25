#include "AuricCellsBundleViewData.h"

FAuricCellsBundleViewData::FAuricCellsBundleViewData()
{
	this->Id = NAME_None;
	this->IconTexture = NULL;
	this->CurrencyName = FText::GetEmpty();
	this->CurrencyAmount = 0;
	this->DisplayedPrice = TEXT("");
	this->BonusPercentage = 0.0f;
}
