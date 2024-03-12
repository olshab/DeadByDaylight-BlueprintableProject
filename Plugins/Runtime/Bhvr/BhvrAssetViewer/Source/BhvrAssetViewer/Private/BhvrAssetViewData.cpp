#include "BhvrAssetViewData.h"

bool UBhvrAssetViewData::IsLoading() const
{
	return false;
}

FString UBhvrAssetViewData::GetId() const
{
	return TEXT("");
}

FString UBhvrAssetViewData::GetDisplayName() const
{
	return TEXT("");
}

UBhvrAssetViewData::UBhvrAssetViewData()
{
	this->Id = TEXT("");
	this->DisplayName = TEXT("");
	this->bIsLoading = false;
}
