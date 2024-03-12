#include "StoreItemViewData.h"
#include "UObject/SoftObjectPtr.h"

class UTexture2D;

bool UStoreItemViewData::GetIsOwned() const
{
	return false;
}

bool UStoreItemViewData::GetIsEnabled() const
{
	return false;
}

bool UStoreItemViewData::GetIsBuyable() const
{
	return false;
}

bool UStoreItemViewData::GetIsAvailable() const
{
	return false;
}

TSoftObjectPtr<UTexture2D> UStoreItemViewData::GetIcon() const
{
	return NULL;
}

UStoreItemViewData::UStoreItemViewData()
{
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->IsInStore = false;
	this->IsNewInStore = false;
	this->IsTutorialItem = false;
	this->LimitedTimeText = TEXT("");
	this->DiscountTimeText = TEXT("");
	this->ChapterPackId = TEXT("");
	this->HeritagePackId = TEXT("");
	this->SpecialPackIds = TArray<FName>();
}
