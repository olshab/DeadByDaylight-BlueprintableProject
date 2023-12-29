#include "StoreSpecialPackItem.h"

FStoreSpecialPackItem::FStoreSpecialPackItem()
{
	this->Id = TEXT("");
	this->Type = EStoreSpecialPackItemType::Inventory;
	this->Amount = 0;
}
