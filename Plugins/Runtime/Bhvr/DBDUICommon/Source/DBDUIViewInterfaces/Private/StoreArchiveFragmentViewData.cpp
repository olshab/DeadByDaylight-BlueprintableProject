#include "StoreArchiveFragmentViewData.h"

FStoreArchiveFragmentViewData::FStoreArchiveFragmentViewData()
{
	this->Id = TEXT("");
	this->ArchiveId = NAME_None;
	this->Amount = 0;
	this->TooltipData = FCurrencyProgressionTooltipViewData{};
}
