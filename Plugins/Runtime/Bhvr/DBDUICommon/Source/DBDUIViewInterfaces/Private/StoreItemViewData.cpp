#include "StoreItemViewData.h"

UStoreItemViewData::UStoreItemViewData()
{
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->IsInStore = false;
	this->IsNewInStore = false;
	this->LimitedTimeText = TEXT("");
	this->DiscountTimeText = TEXT("");
}
