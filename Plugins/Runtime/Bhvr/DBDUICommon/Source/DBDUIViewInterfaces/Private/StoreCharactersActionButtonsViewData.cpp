#include "StoreCharactersActionButtonsViewData.h"

FStoreCharactersActionButtonsViewData::FStoreCharactersActionButtonsViewData()
{
	this->UnlockState = EStoreCharactersActionButtonState::Hidden;
	this->EquipState = EStoreCharactersActionButtonState::Hidden;
	this->EquipAllState = EStoreCharactersActionButtonState::Hidden;
	this->SelectAllState = EStoreCharactersActionButtonState::Hidden;
	this->AlternativeUnlockState = EStoreCharactersActionButtonState::Hidden;
	this->PlayMoriState = EStoreCharactersActionButtonState::Hidden;
	this->ZoomCharmState = EStoreCharactersActionButtonState::Hidden;
	this->IsCharmZoomed = false;
	this->PriceTagData = TArray<FPriceTagViewData>();
	this->UnlockInfo = FStoreItemUnlockInfoViewData{};
}
