#include "BhvrAssetViewer.h"

class UBhvrAssetViewData;
class UBhvrAssetViewDataSource;
class UBhvrAssetViewController;

void ABhvrAssetViewer::SelectAssetViewDataSource(const FString& AssetViewDataSourceId)
{

}

void ABhvrAssetViewer::OnSelectedAssetViewDataChanged(UBhvrAssetViewData* OldAssetViewData, UBhvrAssetViewData* NewAssetViewData)
{

}

bool ABhvrAssetViewer::IsLoading() const
{
	return false;
}

UBhvrAssetViewDataSource* ABhvrAssetViewer::GetSelectedAssetViewDataSource() const
{
	return NULL;
}

UBhvrAssetViewController* ABhvrAssetViewer::GetSelectedAssetViewController() const
{
	return NULL;
}

void ABhvrAssetViewer::BeginPlay()
{

}

ABhvrAssetViewer::ABhvrAssetViewer()
{
	this->AssetViewDataSourceBaseClass = NULL;
	this->AssetViewControllerBaseClass = NULL;
	this->AssetSpawnPoint = NULL;
	this->AssetViewDataSourceOptions = TArray<FBhvrAssetViewOption>();
	this->AssetViewDataSources = TMap<FString, UBhvrAssetViewDataSource*>();
	this->AssetViewControllers = TArray<UBhvrAssetViewController*>();
	this->bIsLoading = false;
	this->SelectedAssetViewDataSource = NULL;
	this->SelectedAssetViewController = NULL;
}
