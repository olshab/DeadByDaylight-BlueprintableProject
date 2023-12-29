#include "StoreCollectionViewData.h"

bool UStoreCollectionViewData::IsSpecialActive() const
{
	return false;
}

bool UStoreCollectionViewData::IsCollectionActive() const
{
	return false;
}

bool UStoreCollectionViewData::HasHeroVideo() const
{
	return false;
}

bool UStoreCollectionViewData::HasHeroImage() const
{
	return false;
}

UStoreCollectionViewData::UStoreCollectionViewData()
{
	this->CollectionId = TEXT("");
	this->DisplayTitle = TEXT("");
	this->DisplaySubtitle = TEXT("");
	this->SortOrder = 0;
	this->HeroVideo = NULL;
	this->AdditionalImages = TArray<FSoftRemoteContentCacheObjectPtr>();
	this->IsNew = false;
	this->IsFeatured = false;
	this->IsSpecial = false;
	this->Items = TArray<UStoreCustomizationItemViewData*>();
}
