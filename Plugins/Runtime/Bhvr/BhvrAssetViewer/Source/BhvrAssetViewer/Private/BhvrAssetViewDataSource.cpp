#include "BhvrAssetViewDataSource.h"

class UBhvrAssetViewData;

void UBhvrAssetViewDataSource::SelectAssetViewData(const FString& AssetViewDataId)
{

}

bool UBhvrAssetViewDataSource::IsLoading() const
{
	return false;
}

UBhvrAssetViewData* UBhvrAssetViewDataSource::GetSelectedAssetViewData()
{
	return NULL;
}

FString UBhvrAssetViewDataSource::GetId() const
{
	return TEXT("");
}

FString UBhvrAssetViewDataSource::GetDisplayName() const
{
	return TEXT("");
}

UBhvrAssetViewDataSource::UBhvrAssetViewDataSource()
{
	this->Id = TEXT("");
	this->DisplayName = TEXT("");
	this->AssetViewDataOptions = TArray<FBhvrAssetViewOption>();
	this->AssetViewDatas = TMap<FString, UBhvrAssetViewData*>();
	this->bIsLoading = false;
	this->SelectedAssetViewData = NULL;
}
