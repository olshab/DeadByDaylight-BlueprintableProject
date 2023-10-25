#include "CustomizationItemPreviewAreaViewData.h"

FCustomizationItemPreviewAreaViewData::FCustomizationItemPreviewAreaViewData()
{
	this->PreviewItem = FCustomizationRewardViewData{};
	this->ItemsData = TArray<FCustomizationRewardViewData>();
	this->IsOutfit = false;
}
