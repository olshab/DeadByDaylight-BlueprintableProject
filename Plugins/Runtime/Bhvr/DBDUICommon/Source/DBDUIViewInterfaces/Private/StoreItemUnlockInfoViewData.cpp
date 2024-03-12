#include "StoreItemUnlockInfoViewData.h"

FStoreItemUnlockInfoViewData::FStoreItemUnlockInfoViewData()
{
	this->Id = TEXT("");
	this->Title = FText::GetEmpty();
	this->Type = EStoreItemUnlockType::None;
}
