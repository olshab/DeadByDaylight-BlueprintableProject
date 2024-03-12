#include "StoreSpecialPackRuntimeData.h"

FStoreSpecialPackRuntimeData::FStoreSpecialPackRuntimeData()
{
	this->IsValid = false;
	this->Id = TEXT("");
	this->TitleByCulture = TMap<FString, FString>();
	this->Content = TArray<FStoreSpecialPackRuntimeItem>();
	this->OriginalCost = TMap<ECurrencyType, uint32>();
	this->DiscountedCost = TMap<ECurrencyType, uint32>();
	this->Discount = 0.0f;
	this->StartDate = FDateTime{};
	this->EndDate = FDateTime{};
	this->IsOwned = false;
	this->IsNew = false;
	this->Image = TEXT("");
	this->DLCId = TEXT("");
	this->SortOrder = 0;
}
