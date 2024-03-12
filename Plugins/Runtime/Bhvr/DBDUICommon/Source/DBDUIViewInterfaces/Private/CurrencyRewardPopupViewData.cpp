#include "CurrencyRewardPopupViewData.h"

UCurrencyRewardPopupViewData::UCurrencyRewardPopupViewData()
{
	this->Currency = ECurrencyType::None;
	this->Amount = 0;
	this->HasSourcePackId = false;
	this->SourcePackId = TEXT("");
}
