#include "CharacterTooltipViewData.h"

FCharacterTooltipViewData::FCharacterTooltipViewData()
{
	this->DisplayName = FText::GetEmpty();
	this->Biography = FText::GetEmpty();
	this->DLCTitle = FText::GetEmpty();
	this->PackId = FText::GetEmpty();
	this->PackTitle = FText::GetEmpty();
	this->Level = 0;
	this->IsNewInStore = false;
	this->IsOwned = false;
	this->IsAvailableInStore = false;
	this->IsDLCPurchasable = false;
	this->Difficulty = ECharacterDifficulty::VE_None;
	this->IsEnabled = false;
	this->CharacterDisabledMessage = FText::GetEmpty();
}
