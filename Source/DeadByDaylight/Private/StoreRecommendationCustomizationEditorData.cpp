#include "StoreRecommendationCustomizationEditorData.h"

FStoreRecommendationCustomizationEditorData::FStoreRecommendationCustomizationEditorData()
{
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->Outfits = TArray<FString>();
	this->Items = TArray<FString>();
	this->RecommendedCategoriesPriority = TArray<FString>();
}
