#include "StoreCollectionRuntimeData.h"

FStoreCollectionRuntimeData::FStoreCollectionRuntimeData()
{
	this->CollectionId = TEXT("");
	this->InclusionVersion = TEXT("");
	this->CollectionTitleByCulture = TMap<FString, FString>();
	this->CollectionSubtitleByCulture = TMap<FString, FString>();
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->SortOrder = 0;
	this->HeroImage = TEXT("");
	this->HeroVideo = TEXT("");
	this->AdditionalImages = TArray<FString>();
	this->ItemIds = TArray<FString>();
	this->Flags = EStoreCollectionFlags::None;
	this->SpecialStartDate = FDateTime{};
	this->SpecialEndDate = FDateTime{};
}
