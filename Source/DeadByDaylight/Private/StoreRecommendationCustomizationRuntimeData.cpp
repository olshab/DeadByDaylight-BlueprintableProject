#include "StoreRecommendationCustomizationRuntimeData.h"

FStoreRecommendationCustomizationRuntimeData::FStoreRecommendationCustomizationRuntimeData()
{
	this->ActiveFrom = FDateTime{};
	this->ActiveTo = FDateTime{};
	this->CategoryPriorities = TArray<FString>();
	this->Recommendations = TArray<FStoreRecommendationCustomizationItemsRuntimeData>();
}
