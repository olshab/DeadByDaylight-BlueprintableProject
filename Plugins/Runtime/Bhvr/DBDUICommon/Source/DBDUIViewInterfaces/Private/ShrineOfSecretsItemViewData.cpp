#include "ShrineOfSecretsItemViewData.h"

FShrineOfSecretsItemViewData::FShrineOfSecretsItemViewData()
{
	this->ItemId = NAME_None;
	this->BPCost = 0;
	this->Perk = NULL;
	this->PerkTooltip = FLoadoutTooltipData{};
	this->PriceTag = FPriceTagViewData{};
	this->PerkMaxed = false;
	this->BPClaimed = false;
	this->IsASurvivor = false;
	this->Portrait = NULL;
}
