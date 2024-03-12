#include "StoreSpecialPackCatalogItemMetaData.h"

FStoreSpecialPackCatalogItemMetaData::FStoreSpecialPackCatalogItemMetaData()
{
	this->FullPrice = TArray<FStoreSpecialPackCatalogPrice>();
	this->SortOrder = 0;
	this->ImagePath = TEXT("");
	this->SpecialPackTitle = TMap<FString, FString>();
	this->Discount = 0.0f;
	this->StartDate = FDateTime{};
	this->StartDate_IsSet = false;
	this->EndDate = FDateTime{};
	this->EndDate_IsSet = false;
	this->DLCId = TEXT("");
	this->DLCId_IsSet = false;
}
