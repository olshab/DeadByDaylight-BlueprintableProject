#include "CustomGamePresetData.h"

FCustomGamePresetData::FCustomGamePresetData()
{
	this->mapAvails = TArray<uint8>();
	this->perkAvail = false;
	this->offeringAvail = false;
	this->itemAvail = false;
	this->itemAddonAvail = false;
	this->dlcContentAllowed = false;
	this->privateMatch = false;
	this->bots = FCustomGameBotsData{};
}
