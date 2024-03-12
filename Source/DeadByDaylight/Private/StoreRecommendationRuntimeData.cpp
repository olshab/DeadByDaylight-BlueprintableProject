#include "StoreRecommendationRuntimeData.h"

FStoreRecommendationRuntimeData::FStoreRecommendationRuntimeData()
{
	this->FeaturedCustomizationRecommendations = TArray<FStoreRecommendationCustomizationRuntimeData>();
	this->FeaturedCharacterRecommendations = TArray<FStoreFeaturedCharacterRecommendationData>();
	this->FeaturedChapterPackRecommendations = TArray<FStoreFeaturedChapterPackRecommendationData>();
	this->SpecialsRecommendations = TArray<FStoreRecommendationCustomizationRuntimeData>();
}
