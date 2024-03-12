#include "BhvrAssetViewController.h"

bool UBhvrAssetViewController::IsLoading() const
{
	return false;
}

UBhvrAssetViewController::UBhvrAssetViewController()
{
	this->bIsLoading = false;
}
