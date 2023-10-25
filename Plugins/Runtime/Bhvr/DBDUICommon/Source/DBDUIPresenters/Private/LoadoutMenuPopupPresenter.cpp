#include "LoadoutMenuPopupPresenter.h"
#include "InventorySlotData.h"
#include "EPlayerRole.h"
#include "ELoadoutSlot.h"

class ULoadoutMenuPopupViewData;

ULoadoutMenuPopupViewData* ULoadoutMenuPopupPresenter::SetLoadoutPopupViewData(const FInventorySlotData& slotData, const EPlayerRole playerRole)
{
	return NULL;
}

void ULoadoutMenuPopupPresenter::OnSelectedCharacterChanged(int32 selectedCharacterIndex)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetSelected(const int32 presetId, const ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuPresetClicked(const int32 presetId, const ELoadoutSlot slotSelected)
{

}

void ULoadoutMenuPopupPresenter::OnLoadoutMenuInventorySlotClick(const ELoadoutSlot itemIndex, const FName itemId)
{

}

ULoadoutMenuPopupPresenter::ULoadoutMenuPopupPresenter()
{
	this->_loadoutPopupSlotData = TArray<ULoadoutMenuPopupViewData*>();
	this->_loadoutPopupInventoryData = TArray<ULoadoutMenuPopupViewData*>();
}
