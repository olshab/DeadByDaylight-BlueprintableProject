#include "StoreArchivePassViewData.h"

FStoreArchivePassViewData::FStoreArchivePassViewData()
{
	this->PassId = TEXT("");
	this->ArchiveId = NAME_None;
	this->ItemName = FText::GetEmpty();
	this->ArchiveTitle = FText::GetEmpty();
	this->TooltipData = FArchivePassTooltipViewData{};
	this->IsOwned = false;
	this->TimerFlagViewData = FTimerFlagViewData{};
}
