#include "StoreCollectionEditorData.h"

FStoreCollectionEditorData::FStoreCollectionEditorData()
{
	this->CollectionId = TEXT("");
	this->InclusionVersion = TEXT("");
	this->CollectionTitle = FText::GetEmpty();
	this->CollectionSubtitle = FText::GetEmpty();
	this->ActiveFrom = FDateTime{};
	this->ActiveUntil = FDateTime{};
	this->SortOrder = 0;
	this->HeroImage = FSoftObjectPath{};
	this->HeroVideo = FSoftObjectPath{};
	this->AdditionalImages = TArray<FSoftObjectPath>();
	this->Items = TArray<FString>();
	this->Flags = 0;
	this->SpecialStartDate = FDateTime{};
	this->SpecialEndDate = FDateTime{};
}
